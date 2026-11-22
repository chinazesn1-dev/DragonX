#!/usr/bin/env python3
"""Locate application code in libkentos.so by scanning string references.

The library is a static-linked mixture of application code, OpenSSL, curl,
libc++, ImGui, Dobby and ByteHook.  Application code references its own UI
strings (Dexo/Kentos).  This script resolves adrp/add and adrp/ldr pairs,
maps every reference to an enclosing function (symbol, BL target or prologue),
and writes UTF-8 reports so Windows console encoding cannot break the run.
"""
from __future__ import annotations

import bisect
import json
import struct
import sys
from collections import defaultdict
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM, CS_OP_IMM, CS_OP_REG, CS_OP_MEM
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

ROOT = Path(r"C:\Users\user\Desktop\libs")
ELF = ROOT / "libkentos.so"
OUT = ROOT / "recovered" / "analysis"
OUT.mkdir(parents=True, exist_ok=True)

CS_AC_WRITE = 2

LOAD_MNEMONICS = (
    "ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "ldrsw", "ldur", "ldurb",
    "ldurh", "ldursb", "ldursh", "ldursw", "ldp", "ldnp",
)
STORE_MNEMONICS = (
    "str", "strb", "strh", "stur", "sturb", "sturh", "stp", "stnp", "stxp",
    "stlxr", "stxr", "stllr", "stlr",
)


def canon(reg_name: str) -> str:
    if not reg_name:
        return reg_name
    if reg_name.startswith(("w", "x")) and reg_name[1:].isdigit():
        return "x" + reg_name[1:]
    return reg_name


def cstr(image: bytes, offset: int, limit: int = 512) -> str | None:
    if offset < 0 or offset >= len(image):
        return None
    end = image.find(b"\x00", offset, min(offset + limit, len(image)))
    if end < 0:
        return None
    raw = image[offset:end]
    if len(raw) < 3:
        return None
    for encoding in ("utf-8", "cp1251", "latin1"):
        try:
            text = raw.decode(encoding)
        except UnicodeDecodeError:
            continue
        printable = sum(ch.isprintable() and ch not in "\r\n\t" for ch in text)
        if printable >= len(text) * 0.9:
            return text
    return None


class ElfView:
    def __init__(self, path: Path):
        self.path = path
        self.image = path.read_bytes()
        self.sections = []
        self.dynsyms = []
        self.relocations = []
        with path.open("rb") as fh:
            elf = ELFFile(fh)
            for section in elf.iter_sections():
                self.sections.append({
                    "name": section.name,
                    "type": section["sh_type"],
                    "addr": section["sh_addr"],
                    "size": section["sh_size"],
                    "offset": section["sh_offset"],
                    "flags": section["sh_flags"],
                })
                if isinstance(section, RelocationSection):
                    for rel in section.iter_relocations():
                        self.relocations.append({
                            "section": section.name,
                            "type": rel["r_info_type"],
                            "offset": rel["r_offset"],
                            "sym": rel["r_info_sym"],
                            "addend": rel["r_addend"] if rel.is_RELA() else 0,
                        })
            dynsym = elf.get_section_by_name(".dynsym")
            if dynsym is not None:
                for sym in dynsym.iter_symbols():
                    if sym["st_info"]["type"] == "STT_FUNC" and sym["st_value"]:
                        self.dynsyms.append({
                            "name": sym.name,
                            "addr": sym["st_value"],
                            "size": sym["st_size"],
                        })
        self.by_name = {s["name"]: s for s in self.sections}

    def section_of(self, addr: int):
        for s in self.sections:
            if s["addr"] and s["size"] and s["addr"] <= addr < s["addr"] + s["size"]:
                return s
        return None

    def file_offset(self, addr: int) -> int | None:
        s = self.section_of(addr)
        if s is None or not s["offset"]:
            return None
        return s["offset"] + (addr - s["addr"])

    def read(self, addr: int, size: int) -> bytes | None:
        off = self.file_offset(addr)
        if off is None or off + size > len(self.image):
            return None
        return self.image[off:off + size]

    def read_cstr(self, addr: int, limit: int = 512) -> str | None:
        off = self.file_offset(addr)
        return cstr(self.image, off, limit) if off is not None else None


def load_relocations(view: ElfView):
    """Resolve R_AARCH64_RELATIVE targets such as .init_array entries."""
    result = {}
    for rel in view.relocations:
        if rel["type"] == 1027:  # R_AARCH64_RELATIVE
            result[rel["offset"]] = rel["addend"]
    return result


def scan_code(view: ElfView):
    text = view.by_name.get(".text")
    if text is None:
        raise SystemExit(".text not found")
    code = view.read(text["addr"], text["size"])
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    md.detail = True
    instructions = list(md.disasm(code, text["addr"]))

    pages: dict[str, int] = {}
    refs = []  # (insn_addr, target_addr, kind)
    calls = set()
    prologues = set()

    for index, insn in enumerate(instructions):
        mnemonic = insn.mnemonic
        ops = insn.operands

        if mnemonic == "adrp" and len(ops) >= 2 and ops[0].type == CS_OP_REG and ops[1].type == CS_OP_IMM:
            pages[canon(insn.reg_name(ops[0].reg))] = ops[1].imm
            continue

        target = None
        kind = ""
        if mnemonic in ("add", "sub") and len(ops) >= 3:
            base = ops[1]
            if base.type == CS_OP_REG and ops[2].type == CS_OP_IMM:
                page = pages.get(canon(insn.reg_name(base.reg)))
                if page is not None:
                    delta = ops[2].imm
                    target = page + delta if mnemonic == "add" else page - delta
                    kind = mnemonic
        elif mnemonic in LOAD_MNEMONICS:
            for op in ops:
                if op.type == CS_OP_MEM:
                    page = pages.get(canon(insn.reg_name(op.mem.base)))
                    if page is not None:
                        target = page + op.mem.disp
                        kind = "load"
                        break
        if target is not None:
            refs.append((insn.address, target, kind))

        if mnemonic in ("bl", "b") and ops and ops[0].type == CS_OP_IMM:
            calls.add(ops[0].imm)

        # Heuristic function prologues for code without symbols.
        if mnemonic == "sub" and len(ops) >= 3 and ops[0].type == CS_OP_REG and ops[1].type == CS_OP_REG:
            if insn.reg_name(ops[0].reg) == "sp" and insn.reg_name(ops[1].reg) == "sp":
                prologues.add(insn.address)
        elif mnemonic in ("stp", "str") and ops and ops[0].type == CS_OP_REG:
            if insn.reg_name(ops[0].reg) in ("x29", "x30"):
                for op in ops:
                    if op.type == CS_OP_MEM and insn.reg_name(op.mem.base) == "sp" and op.mem.disp < 0:
                        prologues.add(insn.address)

        # Track page-register invalidation after resolution.
        if mnemonic not in STORE_MNEMONICS and ops and ops[0].type == CS_OP_REG:
            pages.pop(canon(insn.reg_name(ops[0].reg)), None)

    return instructions, refs, calls, prologues, text


def main() -> int:
    view = ElfView(ELF)
    relocs = load_relocations(view)
    instructions, refs, calls, prologues, text = scan_code(view)

    starts = {}
    for sym in view.dynsyms:
        starts[sym["addr"]] = sym["name"]
    for addr in calls:
        if text["addr"] <= addr < text["addr"] + text["size"]:
            starts.setdefault(addr, f"FUN_{addr:x}")
    for addr in prologues:
        starts.setdefault(addr, f"FUN_{addr:x}")
    ordered = sorted(starts)
    names = [starts[a] for a in ordered]

    def enclosing(addr: int):
        i = bisect.bisect_right(ordered, addr) - 1
        if i < 0:
            return None, None
        if ordered[i] == addr:
            return ordered[i], names[i]
        # Reject wild jumps across a huge gap (data or unknown region).
        return ordered[i], names[i]

    # Strings and xrefs.
    strings: dict[int, str] = {}
    for insn_addr, target, kind in refs:
        text_value = view.read_cstr(target)
        if text_value:
            strings.setdefault(target, text_value)
        elif kind == "load":
            raw = view.read(target, 8)
            if raw and len(raw) == 8:
                ptr = struct.unpack("<Q", raw)[0]
                text_value = view.read_cstr(ptr)
                if text_value:
                    strings.setdefault(ptr, text_value)

    xref_rows = []
    app_hits = []
    for insn_addr, target, kind in refs:
        text_value = None
        str_addr = target
        text_value = view.read_cstr(target)
        if text_value is None and kind == "load":
            raw = view.read(target, 8)
            if raw and len(raw) == 8:
                ptr = struct.unpack("<Q", raw)[0]
                text_value = view.read_cstr(ptr)
                str_addr = ptr if text_value else target
        if text_value is None:
            continue
        func_addr, func_name = enclosing(insn_addr)
        xref_rows.append((insn_addr, func_addr, func_name, kind, str_addr, text_value))
        lowered = text_value.lower()
        if any(key in lowered for key in (
            "dexo", "kentos", "bangjo", "login", "license", "aim", "esp",
            "skin", "lua", "config", "saved_key", "pubg", "player", "vehicle",
            "outfit", "helmet", "bag",
        )):
            app_hits.append((insn_addr, func_addr, func_name, text_value))

    with (OUT / "sections.txt").open("w", encoding="utf-8") as fh:
        fh.write("name\taddr\tsize\toffset\tflags\ttype\n")
        for s in view.sections:
            fh.write(f"{s['name']}\t{s['addr']:#x}\t{s['size']:#x}\t{s['offset']:#x}\t{s['flags']:#x}\t{s['type']}\n")

    with (OUT / "string-xrefs.tsv").open("w", encoding="utf-8") as fh:
        fh.write("insn\tfunction\tfunction_name\tkind\tstring_addr\tstring\n")
        for row in sorted(xref_rows):
            fh.write("{0:#x}\t{1}\t{2}\t{3}\t{4:#x}\t{5}\n".format(
                row[0], f"{row[1]:#x}" if row[1] else "",
                row[2] or "", row[3], row[4],
                row[5].replace("\t", " ").replace("\n", " ")))

    with (OUT / "app-string-xrefs.tsv").open("w", encoding="utf-8") as fh:
        fh.write("insn\tfunction\tfunction_name\tstring\n")
        for row in sorted(app_hits):
            fh.write("{0:#x}\t{1:#x}\t{2}\t{3}\n".format(
                row[0], row[1] or 0, row[2] or "",
                row[3].replace("\t", " ").replace("\n", " ")))

    # Function summary for functions that reference strings.
    per_func = defaultdict(lambda: {"count": 0, "first": None, "last": None, "strings": set()})
    for insn_addr, func_addr, func_name, kind, str_addr, value in xref_rows:
        if func_addr is None:
            continue
        item = per_func[func_addr]
        item["count"] += 1
        item["first"] = insn_addr if item["first"] is None else min(item["first"], insn_addr)
        item["last"] = insn_addr if item["last"] is None else max(item["last"], insn_addr)
        item["strings"].add(value)

    with (OUT / "functions-with-strings.tsv").open("w", encoding="utf-8") as fh:
        fh.write("function\tname\trefs\tfirst\tlast\tsample\n")
        for addr in sorted(per_func):
            item = per_func[addr]
            sample = " | ".join(sorted(item["strings"])[:4])
            fh.write(f"{addr:#x}\t{starts.get(addr, '')}\t{item['count']}\t{item['first']:#x}\t{item['last']:#x}\t{sample[:300]}\n")

    # init_array / fini_array entries.
    init_lines = []
    for name in (".init_array", ".fini_array"):
        section = view.by_name.get(name)
        if not section:
            continue
        raw = view.read(section["addr"], section["size"]) or b""
        for i in range(0, len(raw) - 7, 8):
            addr = section["addr"] + i
            value = relocs.get(addr)
            slot = struct.unpack("<Q", raw[i:i + 8])[0]
            target = value if value is not None else slot
            init_lines.append((name, addr, target, starts.get(target, "")))
    with (OUT / "init-array.tsv").open("w", encoding="utf-8") as fh:
        fh.write("array\tslot\ttarget\tsymbol\n")
        for name, addr, target, sym in init_lines:
            fh.write(f"{name}\t{addr:#x}\t{target:#x}\t{sym}\n")

    # Application region estimate: contiguous span of functions referencing app strings.
    app_funcs = sorted({row[1] for row in app_hits if row[1]})
    summary = {
        "instructions": len(instructions),
        "text_start": hex(text["addr"]),
        "text_end": hex(text["addr"] + text["size"]),
        "resolved_refs": len(refs),
        "strings": len(strings),
        "string_xrefs": len(xref_rows),
        "app_string_xrefs": len(app_hits),
        "app_functions": len(app_funcs),
        "app_function_first": hex(app_funcs[0]) if app_funcs else None,
        "app_function_last": hex(app_funcs[-1]) if app_funcs else None,
        "function_starts": len(ordered),
        "init_array_entries": len(init_lines),
    }
    (OUT / "app-scan-summary.json").write_text(json.dumps(summary, indent=2), encoding="utf-8")
    print(json.dumps(summary, indent=2))
    return 0


if __name__ == "__main__":
    sys.exit(main())
