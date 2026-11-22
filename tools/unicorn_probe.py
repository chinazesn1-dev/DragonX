#!/usr/bin/env python3
"""Minimal ARM64 ELF probe for libkentos.so.

Loads PT_LOAD segments, applies dynamic relocations, resolves imports to
small stubs, and executes one exported function under Unicorn.  The tool is
intended for differential checks of recovered functions, not for running the
whole library.
"""
from __future__ import annotations

import argparse
import json
import struct
import sys
from dataclasses import dataclass, field
from pathlib import Path
from typing import Dict, List, Optional, Tuple

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from unicorn import (
    Uc,
    UC_ARCH_ARM64,
    UC_MODE_ARM,
    UC_HOOK_CODE,
    UC_HOOK_MEM_READ_UNMAPPED,
    UC_HOOK_MEM_WRITE_UNMAPPED,
    UC_HOOK_MEM_FETCH_UNMAPPED,
)
from unicorn.arm64_const import (
    UC_ARM64_REG_X0,
    UC_ARM64_REG_X1,
    UC_ARM64_REG_X2,
    UC_ARM64_REG_X3,
    UC_ARM64_REG_X4,
    UC_ARM64_REG_X5,
    UC_ARM64_REG_X6,
    UC_ARM64_REG_X7,
    UC_ARM64_REG_X8,
    UC_ARM64_REG_X29,
    UC_ARM64_REG_X30,
    UC_ARM64_REG_SP,
    UC_ARM64_REG_PC,
)

BASE = 0x100000000
STUB_BASE = 0x200000000
STUB_STRIDE = 16
STACK_BASE = 0x300000000
STACK_SIZE = 0x200000
SCRATCH_BASE = 0x400000000
SCRATCH_SIZE = 0x100000
SENTINEL = 0x500000000
PAGE = 0x1000


def align_down(value: int, alignment: int = PAGE) -> int:
    return value & ~(alignment - 1)


def align_up(value: int, alignment: int = PAGE) -> int:
    return (value + alignment - 1) & ~(alignment - 1)


@dataclass
class Import:
    name: str
    addr: int
    calls: int = 0


@dataclass
class ProbeResult:
    function: str
    entry: int
    x0: int = 0
    x1: int = 0
    instructions: int = 0
    stopped: str = ""
    imports: Dict[str, int] = field(default_factory=dict)
    string_at_x0: Optional[str] = None
    memory_at_x0: Optional[str] = None
    error: Optional[str] = None


class Arm64Probe:
    def __init__(self, elf_path: str, trace: bool = False):
        self.path = Path(elf_path)
        self.trace = trace
        self.uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        self.imports: Dict[int, Import] = {}
        self.imports_by_name: Dict[str, Import] = {}
        self.symbols: Dict[str, int] = {}
        self.instruction_count = 0
        self.trace_lines: List[str] = []
        self.stop_reason = "return"
        self.malloc_ptr = SCRATCH_BASE + 0x80000
        self._load()

    def _read_cstr(self, address: int, limit: int = 4096) -> Optional[str]:
        data = bytearray()
        try:
            for i in range(limit):
                b = self.uc.mem_read(address + i, 1)[0]
                if b == 0:
                    return data.decode("utf-8", "replace")
                data.append(b)
        except Exception:
            return None
        return data.decode("utf-8", "replace")

    def _stub_name(self, address: int) -> Optional[str]:
        item = self.imports.get(address)
        return item.name if item else None

    def _write_u64(self, address: int, value: int) -> None:
        self.uc.mem_write(address, struct.pack("<Q", value & 0xFFFFFFFFFFFFFFFF))

    def _read_u64(self, address: int) -> int:
        return struct.unpack("<Q", self.uc.mem_read(address, 8))[0]

    def _make_stub(self, address: int) -> None:
        # mov x0, #0 ; ret
        self.uc.mem_write(address, struct.pack("<II", 0xD2800000, 0xD65F03C0))

    def _load(self) -> None:
        with self.path.open("rb") as fh:
            elf = ELFFile(fh)
            loads = [seg for seg in elf.iter_segments() if seg["p_type"] == "PT_LOAD"]
            if not loads:
                raise RuntimeError("ELF has no PT_LOAD segments")
            max_end = max(seg["p_vaddr"] + seg["p_memsz"] for seg in loads)
            self.uc.mem_map(BASE, align_up(max_end, PAGE), 7)
            for seg in loads:
                data = seg.data()
                if data:
                    self.uc.mem_write(BASE + seg["p_vaddr"], data)

            self.uc.mem_map(STUB_BASE, 0x200000, 7)
            self.uc.mem_map(STACK_BASE, STACK_SIZE, 7)
            self.uc.mem_map(SCRATCH_BASE, SCRATCH_SIZE, 7)
            self.uc.mem_map(align_down(SENTINEL), PAGE, 7)
            self.uc.mem_write(SENTINEL, struct.pack("<I", 0xD65F03C0))

            dynsym = elf.get_section_by_name(".dynsym")
            if dynsym is not None:
                for index, sym in enumerate(dynsym.iter_symbols()):
                    name = sym.name
                    value = sym["st_value"]
                    if name and value:
                        self.symbols[name] = BASE + value
                    if name and sym["st_shndx"] == "SHN_UNDEF":
                        stub = STUB_BASE + len(self.imports) * STUB_STRIDE
                        self._make_stub(stub)
                        item = Import(name=name, addr=stub)
                        self.imports[stub] = item
                        self.imports_by_name[name] = item

            self._apply_relocations(elf)
            self.uc.hook_add(UC_HOOK_CODE, self._hook_code)
            self.uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED, self._hook_bad_mem)
            self.uc.hook_add(UC_HOOK_MEM_WRITE_UNMAPPED, self._hook_bad_mem)
            self.uc.hook_add(UC_HOOK_MEM_FETCH_UNMAPPED, self._hook_bad_mem)

    def _symbol_value(self, sym, addend: int) -> int:
        name = sym.name
        if sym["st_shndx"] != "SHN_UNDEF" and sym["st_value"]:
            return BASE + sym["st_value"] + addend
        item = self.imports_by_name.get(name)
        if item is None:
            stub = STUB_BASE + len(self.imports) * STUB_STRIDE
            self._make_stub(stub)
            item = Import(name=name or "<unnamed>", addr=stub)
            self.imports[stub] = item
            self.imports_by_name[item.name] = item
        return item.addr + addend

    def _apply_relocations(self, elf: ELFFile) -> None:
        dynsym = elf.get_section_by_name(".dynsym")
        for section in elf.iter_sections():
            if not isinstance(section, RelocationSection):
                continue
            for rel in section.iter_relocations():
                rtype = rel["r_info_type"]
                offset = BASE + rel["r_offset"]
                addend = rel["r_addend"] if rel.is_RELA() else self._read_u64(offset)
                sym_index = rel["r_info_sym"]
                sym = dynsym.get_symbol(sym_index) if dynsym is not None and sym_index else None
                # AArch64 relocation types used by Android ELF.
                if rtype in (0,):  # R_AARCH64_NONE
                    continue
                if rtype == 1027:  # R_AARCH64_RELATIVE
                    self._write_u64(offset, BASE + addend)
                elif rtype in (1025, 1026):  # GLOB_DAT, JUMP_SLOT
                    if sym is not None:
                        self._write_u64(offset, self._symbol_value(sym, 0))
                elif rtype == 257:  # ABS64
                    if sym is not None:
                        self._write_u64(offset, self._symbol_value(sym, addend))
                elif rtype == 256:  # ABS32
                    if sym is not None:
                        self.uc.mem_write(offset, struct.pack("<I", self._symbol_value(sym, addend) & 0xFFFFFFFF))
                else:
                    # Keep a record for unsupported relocation types; most are
                    # TLS relocations that this single-thread probe does not use.
                    pass

    def _hook_code(self, uc: Uc, address: int, size: int, _user) -> None:
        self.instruction_count += 1
        if self.trace and len(self.trace_lines) < 20000:
            try:
                code = bytes(uc.mem_read(address, min(size, 16)))
                self.trace_lines.append(f"{address - BASE:#x}: {code.hex()}")
            except Exception:
                pass
        name = self._stub_name(address)
        if name is None:
            return
        item = self.imports[address]
        item.calls += 1
        handled = self._emulate_import(uc, name)
        if handled:
            uc.reg_write(UC_ARM64_REG_PC, uc.reg_read(UC_ARM64_REG_X30))

    def _hook_bad_mem(self, uc: Uc, access, address: int, size: int, value: int, _user) -> bool:
        self.stop_reason = f"unmapped access {access} at {address:#x} size {size}"
        return False

    def _emulate_import(self, uc: Uc, name: str) -> bool:
        x0 = uc.reg_read(UC_ARM64_REG_X0)
        x1 = uc.reg_read(UC_ARM64_REG_X1)
        x2 = uc.reg_read(UC_ARM64_REG_X2)
        if name in ("memcpy", "memmove"):
            data = bytes(uc.mem_read(x1, x2))
            uc.mem_write(x0, data)
            uc.reg_write(UC_ARM64_REG_X0, x0)
            return True
        if name == "memset":
            uc.mem_write(x0, bytes([x1 & 0xFF]) * x2)
            uc.reg_write(UC_ARM64_REG_X0, x0)
            return True
        if name in ("strlen", "strnlen"):
            limit = x1 if name == "strnlen" else 1 << 20
            n = 0
            while n < limit:
                if uc.mem_read(x0 + n, 1)[0] == 0:
                    break
                n += 1
            uc.reg_write(UC_ARM64_REG_X0, n)
            return True
        if name in ("strcmp", "strncmp"):
            limit = x2 if name == "strncmp" else 1 << 20
            n = 0
            while n < limit:
                a = uc.mem_read(x0 + n, 1)[0]
                b = uc.mem_read(x1 + n, 1)[0]
                if a != b or a == 0:
                    uc.reg_write(UC_ARM64_REG_X0, (a - b) & 0xFFFFFFFFFFFFFFFF)
                    return True
                n += 1
            uc.reg_write(UC_ARM64_REG_X0, 0)
            return True
        if name in ("strcpy", "strncpy"):
            limit = x2 if name == "strncpy" else 1 << 20
            n = 0
            while n < limit:
                b = uc.mem_read(x1 + n, 1)[0]
                uc.mem_write(x0 + n, bytes([b]))
                if b == 0 and name == "strcpy":
                    break
                n += 1
            uc.reg_write(UC_ARM64_REG_X0, x0)
            return True
        if name == "malloc":
            size = (x0 + 15) & ~15
            ptr = self.malloc_ptr
            self.malloc_ptr += max(size, 16) + 16
            if self.malloc_ptr >= SCRATCH_BASE + SCRATCH_SIZE:
                raise RuntimeError("probe heap exhausted")
            uc.mem_write(ptr, b"\x00" * max(size, 16))
            uc.reg_write(UC_ARM64_REG_X0, ptr)
            return True
        if name == "calloc":
            size = x0 * x1
            ptr = self.malloc_ptr
            self.malloc_ptr += ((size + 15) & ~15) + 16
            uc.mem_write(ptr, b"\x00" * max(size, 16))
            uc.reg_write(UC_ARM64_REG_X0, ptr)
            return True
        if name == "free":
            uc.reg_write(UC_ARM64_REG_X0, 0)
            return True
        if name in ("pthread_mutex_lock", "pthread_mutex_unlock", "pthread_mutex_init",
                    "pthread_rwlock_rdlock", "pthread_rwlock_wrlock", "pthread_rwlock_unlock",
                    "pthread_once", "__cxa_atexit", "__cxa_thread_atexit"):
            uc.reg_write(UC_ARM64_REG_X0, 0)
            return True
        if name in ("abort", "__stack_chk_fail", "__assert2", "__assert"):
            self.stop_reason = f"fatal import {name}"
            uc.emu_stop()
            return True
        return False

    def call(self, name: str, args: List[int], timeout_us: int = 5_000_000,
             count: int = 2_000_000) -> ProbeResult:
        if name not in self.symbols:
            raise KeyError(f"exported symbol not found: {name}")
        entry = self.symbols[name]
        result = ProbeResult(function=name, entry=entry)
        sp = STACK_BASE + STACK_SIZE - 0x1000
        sp &= ~0xF
        self.uc.mem_write(sp, b"\x00" * 0x100)
        self.uc.reg_write(UC_ARM64_REG_SP, sp)
        self.uc.reg_write(UC_ARM64_REG_X29, 0)
        self.uc.reg_write(UC_ARM64_REG_X30, SENTINEL)
        for reg, value in zip((UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X2,
                               UC_ARM64_REG_X3, UC_ARM64_REG_X4, UC_ARM64_REG_X5,
                               UC_ARM64_REG_X6, UC_ARM64_REG_X7), list(args) + [0] * 8):
            self.uc.reg_write(reg, value & 0xFFFFFFFFFFFFFFFF)
        try:
            self.uc.emu_start(entry, SENTINEL, timeout=timeout_us, count=count)
            result.x0 = self.uc.reg_read(UC_ARM64_REG_X0)
            result.x1 = self.uc.reg_read(UC_ARM64_REG_X1)
            result.stopped = self.stop_reason
            result.instructions = self.instruction_count
            result.imports = {i.name: i.calls for i in self.imports.values() if i.calls}
            result.string_at_x0 = self._read_cstr(result.x0) if result.x0 else None
        except Exception as exc:  # noqa: BLE001 - report Unicorn failures verbatim
            result.error = str(exc)
            result.stopped = self.stop_reason
            result.instructions = self.instruction_count
            result.imports = {i.name: i.calls for i in self.imports.values() if i.calls}
        return result

    def alloc_string(self, text: str) -> int:
        ptr = self.malloc_ptr
        raw = text.encode("utf-8") + b"\x00"
        self.malloc_ptr += len(raw) + 16
        if self.malloc_ptr >= SCRATCH_BASE + SCRATCH_SIZE:
            raise RuntimeError("probe scratch exhausted")
        self.uc.mem_write(ptr, raw)
        return ptr

    def read(self, address: int, size: int) -> bytes:
        return bytes(self.uc.mem_read(address, size))


def parse_arg(probe: Arm64Probe, text: str) -> int:
    if text.startswith("str:"):
        return probe.alloc_string(text[4:])
    if text.startswith("ptr:"):
        return int(text[4:], 0)
    return int(text, 0)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--elf", required=True)
    parser.add_argument("--func", required=True)
    parser.add_argument("--arg", action="append", default=[])
    parser.add_argument("--timeout", type=int, default=5_000_000)
    parser.add_argument("--count", type=int, default=2_000_000)
    parser.add_argument("--trace", action="store_true")
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()

    probe = Arm64Probe(args.elf, trace=args.trace)
    values = [parse_arg(probe, item) for item in args.arg]
    result = probe.call(args.func, values, timeout_us=args.timeout, count=args.count)
    payload = {
        "function": result.function,
        "entry": hex(result.entry),
        "x0": hex(result.x0),
        "x0_signed": result.x0 if result.x0 < (1 << 63) else result.x0 - (1 << 64),
        "x1": hex(result.x1),
        "instructions": result.instructions,
        "stopped": result.stopped,
        "imports": result.imports,
        "string_at_x0": result.string_at_x0,
        "error": result.error,
    }
    if args.trace:
        payload["trace"] = probe.trace_lines
    print(json.dumps(payload, indent=2, ensure_ascii=False))
    return 0 if result.error is None else 1


if __name__ == "__main__":
    sys.exit(main())
