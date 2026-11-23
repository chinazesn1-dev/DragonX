#!/usr/bin/env python3
"""Emulate FUN_001e8780 entry to check the 1.0.5 trampoline.

Calls outside the function are stubbed (return 0 in x0), so the licence checks
themselves fail; what we measure is:

* did execution enter the real function body (0xe8788 .. 0xe8afc),
* did it reach the trampoline tail at 0xda48c,
* is the stack pointer balanced when it gets there,
* what value ends up in w0.
"""
from __future__ import annotations

import sys

from elftools.elf.elffile import ELFFile
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm64_const import (
    UC_ARM64_REG_SP, UC_ARM64_REG_X0, UC_ARM64_REG_X30, UC_ARM64_REG_PC,
)

ENTRY = 0xE8780
FN_END = 0xE8AFC
CAVE_TAIL = 0xDA48C
STACK = 0x10000000
STACK_SIZE = 0x10000
RET_MAGIC = 0x20000000


def run(path: str) -> dict:
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        loads = []
        for seg in elf.iter_segments():
            if seg["p_type"] != "PT_LOAD":
                continue
            loads.append((seg["p_vaddr"], seg["p_memsz"], seg["p_filesz"],
                          seg["p_offset"], seg["p_flags"]))
    image = open(path, "rb").read()

    uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    # single flat RWX image: keeps the probe simple and avoids per-segment
    # permission mistakes (NOBITS sections live in the RW load segment)
    image_end = max(vaddr + memsz for vaddr, memsz, _f, _o, _fl in loads)
    span = (image_end + 0xFFFF) & ~0xFFFF
    uc.mem_map(0, span, 7)
    for vaddr, memsz, filesz, offset, flags in loads:
        uc.mem_write(vaddr, image[offset:offset + filesz])

    uc.mem_map(STACK, STACK_SIZE, 7)
    sp0 = STACK + STACK_SIZE - 0x400
    uc.reg_write(UC_ARM64_REG_SP, sp0)
    uc.reg_write(UC_ARM64_REG_X30, RET_MAGIC)
    uc.reg_write(UC_ARM64_REG_PC, ENTRY)

    res = {"body_entered": False, "reached_tail": False, "sp": None,
           "sp_balanced": False, "w0": None, "steps": 0, "error": None}

    def on_code(uc, address, size, _):
        res["steps"] += 1
        if address == CAVE_TAIL:
            res["reached_tail"] = True
            res["sp"] = uc.reg_read(UC_ARM64_REG_SP)
            res["sp_balanced"] = res["sp"] == sp0
            uc.emu_stop()
            return
        if ENTRY + 8 <= address < FN_END:
            res["body_entered"] = True
        in_body = ENTRY <= address < FN_END
        in_cave = 0xDA47C <= address < 0xDA494
        if not in_body and not in_cave and address != RET_MAGIC:
            # stub external call: "return 0" to the caller
            uc.reg_write(UC_ARM64_REG_X0, 0)
            uc.reg_write(UC_ARM64_REG_PC, uc.reg_read(UC_ARM64_REG_X30))
            return
        if address == RET_MAGIC:
            res["w0"] = uc.reg_read(UC_ARM64_REG_X0) & 0xFFFFFFFF
            uc.emu_stop()
        if res["steps"] > 5000:
            uc.emu_stop()

    uc.hook_add(UC_HOOK_CODE, on_code)
    try:
        uc.emu_start(ENTRY, RET_MAGIC, count=20000)
    except Exception as exc:  # noqa: BLE001
        res["error"] = str(exc)
    if res["w0"] is None:
        res["w0"] = uc.reg_read(UC_ARM64_REG_X0) & 0xFFFFFFFF
    return res


def main() -> int:
    for label, path in (("1.0.3", sys.argv[1]), ("1.0.5", sys.argv[2])):
        r = run(path)
        print(f"{label}: body_entered={r['body_entered']} reached_tail={r['reached_tail']} "
              f"sp_balanced={r['sp_balanced']} w0={r['w0']} steps={r['steps']} "
              f"{r['error'] or ''}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

