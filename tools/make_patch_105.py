#!/usr/bin/env python3
"""Release 1.0.5: keep the licence routine's side effects, force its verdict.

Why: FUN_001e8780 is not a pure predicate.  Before any key check it performs a
one time initialisation and decrypts the static string at DAT_0082f8d0
(``__cxa_guard_acquire`` + ``FUN_001f58d0``).  That string is read by 60+ sites
outside the function (0xe8b70, 0xe8db0, 0xea610, ...), i.e. the rest of the
library consumes it.

The 1.0.2/1.0.3 patch replaced the whole entry with ``mov w0,#1; ret``, so the
initialisation never ran and the rest of the library worked on undecrypted
data - the menu still drew, every feature stayed dead.

New patch: the entry jumps to a small trampoline in a code cave.  The
trampoline replays the two displaced prologue instructions, calls the real body
at 0xe8788 (so all side effects happen) and then overrides the result with 1.

Also: the 1.0.3 change at 0xd8368 is reverted, because the unmodified library
works on the device and that call belongs to the original behaviour.
"""
from __future__ import annotations

import hashlib
import struct
from pathlib import Path

from elftools.elf.elffile import ELFFile

SRC = Path(r"C:\Users\user\Desktop\libs\libkentos.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libkentos.so"

ENTRY = 0xE8780          # FUN_001e8780 entry
BODY = 0xE8788           # entry + 8 (after the two relocated instructions)
CAVE = 0xDA47C           # verified zero filled .text cave, no branch targets

NOP = 0xD503201F
STP_X22_X21 = 0xA9BD57F6   # stp x22, x21, [sp, #-0x30]!
STP_X20_X19 = 0xA9014FF4   # stp x20, x19, [sp, #16]
MOV_W0_1 = 0x52800020
RET = 0xD65F03C0

PAD = 16


def enc_b(from_addr: int, to_addr: int) -> int:
    delta = to_addr - from_addr
    if delta % 4:
        raise ValueError("unaligned branch")
    imm = (delta >> 2) & 0x3FFFFFF
    return 0x14000000 | imm


def enc_bl(from_addr: int, to_addr: int) -> int:
    delta = to_addr - from_addr
    if delta % 4:
        raise ValueError("unaligned branch")
    imm = (delta >> 2) & 0x3FFFFFF
    return 0x94000000 | imm


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def main() -> int:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    image = bytearray(SRC.read_bytes())

    with SRC.open("rb") as fh:
        elf = ELFFile(fh)
        sections = []
        for section in elf.iter_sections():
            if section["sh_addr"] and section["sh_size"]:
                sections.append((section["sh_addr"], section["sh_addr"] + section["sh_size"],
                                 section["sh_offset"], section.name))

    def off(vaddr: int) -> int:
        for start, end, offset, _name in sections:
            if start <= vaddr < end:
                return offset + (vaddr - start)
        raise KeyError(f"vaddr {vaddr:#x} is not mapped")

    trampoline = [
        STP_X22_X21,
        STP_X20_X19,
        enc_bl(CAVE + 8, BODY),
        MOV_W0_1,
        RET,
    ]

    patches: list[tuple[int, bytes]] = []
    # entry -> cave
    patches.append((ENTRY, struct.pack("<I", enc_b(ENTRY, CAVE))))
    # displaced first instruction no longer needed at the entry, keep byte 4..7 as is
    # trampoline in the cave
    patches.append((CAVE, b"".join(struct.pack("<I", insn) for insn in trampoline)))
    # login window branch (unchanged from 1.0.2)
    patches.append((0xEC878, struct.pack("<I", NOP)))

    before = {}
    for vaddr, data in patches:
        offset = off(vaddr)
        before[vaddr] = bytes(image[offset:offset + len(data)])
        image[offset:offset + len(data)] = data

    image += b"\x00" * PAD
    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC.read_bytes())}")
    print(f"output: {DST} size={len(image)} sha256={sha256(bytes(image))}")
    for vaddr, data in patches:
        offset = off(vaddr)
        print(f"patch {vaddr:#x} offset={offset:#x} before={before[vaddr].hex()} "
              f"after={bytes(image[offset:offset + len(data)]).hex()}")
    print("trampoline:")
    for i, insn in enumerate(trampoline):
        print(f"  {CAVE + i * 4:#x}: {insn:08x}")
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
