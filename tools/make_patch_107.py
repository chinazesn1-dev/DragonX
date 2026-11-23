#!/usr/bin/env python3
"""Release 1.0.7: force the licence flag DAT_0082f2c0 to 1.

Without a key the login path never runs, so DAT_0082f2c0 (ELF 0x72f2c0) stays
0.  The original, licensed build has it at 1, and every feature gate reads it.
Force the three read sites to a constant 1:

    0xdcdf4  ldrb w8,[x8,#704] -> mov w8,#1   (game overlay / ESP / aimbot)
    0xe5220  ldrb w8,[x8,#704] -> mov w8,#1   (status text path)
    0xe88b4  ldrb w8,[x8,#704] -> mov w8,#1   (licence routine body)

The login window suppression and the trampoline from 1.0.6 are kept.
"""
from __future__ import annotations

import hashlib
import struct
from pathlib import Path

SRC = Path(r"C:\Users\user\Desktop\libs\libkentos.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libkentos.so"

ENTRY = 0xE8780
BODY = 0xE8788
CAVE = 0xDA47C

NOP = 0xD503201F
MOV_W0_1 = 0x52800020
MOV_W8_1 = 0x52800028
RET = 0xD65F03C0

PAD = 48


def enc_b(a: int, b: int) -> int:
    return 0x14000000 | (((b - a) >> 2) & 0x3FFFFFF)


def enc_bl(a: int, b: int) -> int:
    return 0x94000000 | (((b - a) >> 2) & 0x3FFFFFF)


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def main() -> int:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    image = bytearray(SRC.read_bytes())

    from elftools.elf.elffile import ELFFile
    with SRC.open("rb") as fh:
        elf = ELFFile(fh)
        sections = [(s["sh_addr"], s["sh_addr"] + s["sh_size"], s["sh_offset"])
                    for s in elf.iter_sections() if s["sh_addr"] and s["sh_size"]]

    def off(vaddr: int) -> int:
        for start, end, offset in sections:
            if start <= vaddr < end:
                return offset + (vaddr - start)
        raise KeyError(f"vaddr {vaddr:#x} is not mapped")

    trampoline = [
        0xA9BC57F6,               # stp x22, x21, [sp, #-0x40]!
        0xA9014FF4,               # stp x20, x19, [sp, #16]
        0xF9001BFE,               # str x30, [sp, #0x30]
        enc_bl(CAVE + 12, BODY),  # bl body
        0xF94003FE,               # ldr x30, [sp]
        MOV_W0_1,                 # mov w0, #1
        0x910043FF,               # add sp, sp, #0x10
        RET,                      # ret
    ]

    patches: list[tuple[int, bytes]] = [
        (ENTRY, struct.pack("<I", enc_b(ENTRY, CAVE))),
        (CAVE, b"".join(struct.pack("<I", i) for i in trampoline)),
        (0xEC878, struct.pack("<I", NOP)),
        (0xDCDF4, struct.pack("<I", MOV_W8_1)),
        (0xE5220, struct.pack("<I", MOV_W8_1)),
        (0xE88B4, struct.pack("<I", MOV_W8_1)),
    ]

    before = {}
    for vaddr, data in patches:
        o = off(vaddr)
        before[vaddr] = bytes(image[o:o + len(data)])
        image[o:o + len(data)] = data

    image += b"\x00" * PAD
    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC.read_bytes())}")
    print(f"output: {DST} size={len(image)} sha256={sha256(bytes(image))}")
    for vaddr, data in patches:
        o = off(vaddr)
        print(f"patch {vaddr:#x} before={before[vaddr].hex()} "
              f"after={bytes(image[o:o + len(data)]).hex()}")
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
