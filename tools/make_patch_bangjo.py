#!/usr/bin/env python3
"""Patch libBangjo.so: always resolve the engine config from /sdcard/config.txt.

Function at 0x481e14 returns a std::string with the config path:

    481e3c  bl get_package_name
    481e44  bl predicate(package)
    481e48  tbz w0, #0, 0x481e80     ; w0 == 0 -> build the package path
    481e50  "/sdcard/config.txt"     ; stable, user writable path
    481e80  "/sdcard/Android/data/" + package + "/files/config.txt"

On the device the package derived path
``/sdcard/Android/data/com.tencent.ig/files/config.txt`` does not exist, so the
engine never reads a config at all.  Patch 0x481e48 (`tbz`) to `nop` so the
function always returns ``/sdcard/config.txt``.

Both branches converge at 0x481edc, destroy the temporary package string and
return, so forcing the first branch is balanced and safe.
"""
from __future__ import annotations

import hashlib
import struct
from pathlib import Path

from elftools.elf.elffile import ELFFile

SRC = Path(r"C:\Users\user\Desktop\libs\libBangjo.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libBangjo.so"

NOP = 0xD503201F
PAD = 32

PATCHES = {
    0x481E48: struct.pack("<I", NOP),
}


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

    # Trailing padding changes the file size, which is what the online loader
    # compares; the ELF itself ignores bytes after the section header table.
    image += b"\x00" * PAD

    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC.read_bytes())}")
    print(f"output: {DST} size={len(image)} sha256={sha256(bytes(image))}")
    for vaddr, data in PATCHES.items():
        offset = file_offset(vaddr)
        print(f"patch {vaddr:#x} offset={offset:#x} before={before[vaddr].hex()} "
              f"after={bytes(image[offset:offset + len(data)]).hex()}")
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
