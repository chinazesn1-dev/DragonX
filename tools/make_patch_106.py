#!/usr/bin/env python3
"""Release 1.0.6: fix the 1.0.5 hang and drop the DEXO_FB uploads.

1.0.5 trampoline bug: the cave did ``bl body`` which overwrites x30 with the
return address into the cave.  The body saves/restores that same x30, so its
``ret`` jumped back into the cave, ``mov w0,#1; ret`` jumped there again - an
infinite loop on the render thread (the game froze before the login screen).

Fixed trampoline: allocate 0x40, keep the caller x30 in the extra 0x10 slot at
[sp+0x30] (the body only uses [sp..sp+0x2F]), then after the body returns load
it back, force w0 = 1 and release the extra frame.

This still runs the real body (so the DAT_0082f8d0 initialisation happens) and
returns 1 for every caller.
"""
from __future__ import annotations

import hashlib
import struct
from pathlib import Path

from elftools.elf.elffile import ELFFile

SRC = Path(r"C:\Users\user\Desktop\libs\libkentos.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libkentos.so"

ENTRY = 0xE8780
BODY = 0xE8788
CAVE = 0xDA47C

NOP = 0xD503201F
MOV_W0_1 = 0x52800020
RET = 0xD65F03C0

PAD = 32


def enc_b(from_addr: int, to_addr: int) -> int:
    return 0x14000000 | (((to_addr - from_addr) >> 2) & 0x3FFFFFF)


def enc_bl(from_addr: int, to_addr: int) -> int:
    return 0x94000000 | (((to_addr - from_addr) >> 2) & 0x3FFFFFF)


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
        0xA9BC57F6,              # stp x22, x21, [sp, #-0x40]!
        0xA9014FF4,              # stp x20, x19, [sp, #16]
        0xF9001BFE,              # str x30, [sp, #0x30]
        enc_bl(CAVE + 12, BODY),  # bl body
        0xF94003FE,              # ldr x30, [sp]
        MOV_W0_1,                # mov w0, #1
        0x910043FF,              # add sp, sp, #0x10
        RET,                     # ret
    ]

    patches: list[tuple[int, bytes]] = [
        (ENTRY, struct.pack("<I", enc_b(ENTRY, CAVE))),
        (CAVE, b"".join(struct.pack("<I", insn) for insn in trampoline)),
        (0xEC878, struct.pack("<I", NOP)),   # skip the DEXO login window
    ]

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
    for i, insn in enumerate(trampoline):
        print(f"  tramp {CAVE + i * 4:#x}: {insn:08x}")
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
