#!/usr/bin/env python3
"""Prove the licence routine's side effect on DAT_0082f8d0.

FUN_001e8780 initialises and decrypts the static string at DAT_0082f8d0
(ELF 0x72f8d0) before it checks any key.  60+ sites outside the function read
that string, so if it is never initialised the rest of the library works on
zeros.

The probe enters the function entry point, stubs every external call (guard
acquire returns 1 so the one time init runs) and compares the 32 bytes at
0x72f8d0 before and after.

  original -> initialised (non zero)
  1.0.3    -> untouched  (all zeros)  <- the regression
  1.0.5    -> initialised (non zero)
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
CAVE = 0xDA47C
CAVE_END = 0xDA494
TARGET = 0x72F8D0
TARGET_LEN = 32

STACK = 0x10000000
STACK_SIZE = 0x10000
RET_MAGIC = 0x20000000

# PLT stubs whose return value matters for the one time init
GUARD_ACQUIRE = {0xD0380, 0x1D0380}
RETURN_ONE = GUARD_ACQUIRE


def run(path: str) -> dict:
    with open(path, "rb") as fh:
        elf = ELFFile(fh)
        loads = [(seg["p_vaddr"], seg["p_memsz"], seg["p_filesz"], seg["p_offset"])
                 for seg in elf.iter_segments() if seg["p_type"] == "PT_LOAD"]
    image = open(path, "rb").read()

    uc = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    span = (max(v + m for v, m, _f, _o in loads) + 0xFFFF) & ~0xFFFF
    uc.mem_map(0, span, 7)
    for vaddr, memsz, filesz, offset in loads:
        uc.mem_write(vaddr, image[offset:offset + filesz])

    uc.mem_map(STACK, STACK_SIZE, 7)
    sp0 = STACK + STACK_SIZE - 0x400
    uc.reg_write(UC_ARM64_REG_SP, sp0)
    uc.reg_write(UC_ARM64_REG_X30, RET_MAGIC)
    uc.reg_write(UC_ARM64_REG_PC, ENTRY)

    before = bytes(uc.mem_read(TARGET, TARGET_LEN))
    res = {"before": before, "after": None, "steps": 0, "error": None,
           "reached": False}

    def on_code(uc, address, size, _):
        res["steps"] += 1
        in_fn = ENTRY <= address < FN_END
        in_cave = CAVE <= address < CAVE_END
        if not in_fn and not in_cave and address != RET_MAGIC:
            uc.reg_write(UC_ARM64_REG_X0, 1 if address in RETURN_ONE else 0)
            uc.reg_write(UC_ARM64_REG_PC, uc.reg_read(UC_ARM64_REG_X30))
            return
        if address == RET_MAGIC:
            res["reached"] = True
            uc.emu_stop()
        if res["steps"] > 20000:
            uc.emu_stop()

    uc.hook_add(UC_HOOK_CODE, on_code)
    try:
        uc.emu_start(ENTRY, RET_MAGIC, count=200000)
    except Exception as exc:  # noqa: BLE001
        res["error"] = str(exc)
    res["after"] = bytes(uc.mem_read(TARGET, TARGET_LEN))
    return res


def main() -> int:
    for label, path in zip(sys.argv[1::2], sys.argv[2::2]):
        r = run(path)
        changed = r["before"] != r["after"]
        nonzero = any(r["after"])
        print(f"{label:9s} dat_0082f8d0 initialized={nonzero} changed={changed} "
              f"steps={r['steps']} error={r['error'] or '-'}")
        print(f"          after: {r['after'].hex()}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
