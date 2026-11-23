#!/usr/bin/env python3
"""Emulate the libBangjo config-path resolver branch.

The function at 0x481e14 returns the engine config path:

    481e48  tbz w0, #0, 0x481e80   ; w0 == 0 -> /sdcard/Android/data/<pkg>/files/config.txt
    481e50  "/sdcard/config.txt"

This probe starts execution at 0x481e48 with w0 = 0 (the "package name is
empty / not usable" case), stubs the std::string assign call, and reports which
path pointer the code actually uses.  Run it against the original and the
patched library to show the difference.
"""
from __future__ import annotations

import sys

from elftools.elf.elffile import ELFFile
from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm64_const import (
    UC_ARM64_REG_SP, UC_ARM64_REG_X0, UC_ARM64_REG_X1, UC_ARM64_REG_X8,
    UC_ARM64_REG_X29, UC_ARM64_REG_X30, UC_ARM64_REG_PC,
)

ENTRY = 0x481E48
ASSIGN_STUB = 0x467184
PATH_BRANCH = 0x481E50
PKG_BRANCH = 0x481E80
DONE = 0x481E64

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
    for vaddr, memsz, filesz, offset, flags in loads:
        start = vaddr & ~0xFFF
        size = (vaddr + memsz - start + 0xFFF) & ~0xFFF
        prot = 0
        if flags & 4:
            prot |= 4  # read
        if flags & 2:
            prot |= 2  # write
        if flags & 1:
            prot |= 1  # exec
        uc.mem_map(start, size, prot or 7)
        uc.mem_write(vaddr, image[offset:offset + filesz])

    uc.mem_map(STACK, STACK_SIZE, 7)
    sp = STACK + STACK_SIZE - 0x200
    scratch = STACK + 0x100  # fake std::string destination
    uc.mem_write(sp + 16, scratch.to_bytes(8, "little"))
    uc.reg_write(UC_ARM64_REG_SP, sp)
    uc.reg_write(UC_ARM64_REG_X29, sp)
    uc.reg_write(UC_ARM64_REG_X8, scratch)
    uc.reg_write(UC_ARM64_REG_X0, 0)  # w0 = 0 -> "package not usable"
    uc.reg_write(UC_ARM64_REG_X30, RET_MAGIC)
    uc.reg_write(UC_ARM64_REG_PC, ENTRY)

    result = {"path_branch": False, "pkg_branch": False, "assign_arg": None,
              "done": False, "steps": 0}

    def on_code(uc, address, size, _):
        result["steps"] += 1
        if address == PATH_BRANCH:
            result["path_branch"] = True
        if address == PKG_BRANCH:
            result["pkg_branch"] = True
        if address == ASSIGN_STUB:
            result["assign_arg"] = uc.reg_read(UC_ARM64_REG_X1)
            uc.reg_write(UC_ARM64_REG_PC, uc.reg_read(UC_ARM64_REG_X30))
            return
        if address == DONE:
            result["done"] = True
            uc.emu_stop()
        if result["steps"] > 200:
            uc.emu_stop()

    uc.hook_add(UC_HOOK_CODE, on_code)
    try:
        uc.emu_start(ENTRY, RET_MAGIC, count=500)
    except Exception as exc:  # noqa: BLE001 - report and continue
        result["error"] = str(exc)
    return result


def main() -> int:
    for label, path in (("original", sys.argv[1]), ("patched", sys.argv[2])):
        r = run(path)
        arg = r["assign_arg"]
        arg_text = f"{arg:#x}" if arg is not None else "none"
        print(f"{label:9s} path_branch={r['path_branch']} pkg_branch={r['pkg_branch']} "
              f"assign_arg={arg_text} done={r['done']} steps={r['steps']} "
              f"{r.get('error','')}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
