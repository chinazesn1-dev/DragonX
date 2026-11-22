#!/usr/bin/env python3
"""Create the login-free libkentos.so patch.

Patch 1 (0xec878): replace `cbz w8, 0xec8b0` (jump to the login window) with NOP.
Patch 2 (0xe8780): replace the licence-check entry with `mov w0,#1; ret`.
"""
from __future__ import annotations

import hashlib
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

SRC = Path(r"C:\Users\user\Desktop\libs\libkentos.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libkentos.so"

NOP = 0xD503201F
MOV_W0_1 = 0x52800020
RET = 0xD65F03C0

PATCHES = {
    0xEC878: struct.pack("<I", NOP),
    0xE8780: struct.pack("<II", MOV_W0_1, RET),
}


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            digest.update(chunk)
    return digest.hexdigest()


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

    def file_offset(vaddr: int) -> int:
        for start, end, offset, name in sections:
            if start <= vaddr < end:
                return offset + (vaddr - start)
        raise KeyError(f"vaddr {vaddr:#x} is not mapped by any section")

    before = {}
    for vaddr, data in PATCHES.items():
        offset = file_offset(vaddr)
        before[vaddr] = bytes(image[offset:offset + len(data)])
        image[offset:offset + len(data)] = data

    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC)}")
    print(f"output: {DST} size={DST.stat().st_size} sha256={sha256(DST)}")
    for vaddr, data in PATCHES.items():
        offset = file_offset(vaddr)
        written = bytes(image[offset:offset + len(data)])
        print(f"patch {vaddr:#x} offset={offset:#x} before={before[vaddr].hex()} after={written.hex()}")
        if written != data:
            raise SystemExit(f"patch verification failed at {vaddr:#x}")
    if DST.stat().st_size != SRC.stat().st_size:
        raise SystemExit("patched file size differs from the original")
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
