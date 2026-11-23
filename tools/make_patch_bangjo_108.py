#!/usr/bin/env python3
"""Release 1.0.8: stop the spurious "Server did not respond" dialog.

The DEXO Lua bypass replaces ``login_module.reqLoginLobby`` and, after
``send_login``, arms a 20 second timer:

    self.loginTimer = self:AddTimerOnce(20, function()
        self:LoginTimeOut()
    end)

``LoginTimeOut`` is the game function that shows the "Server did not respond.
Return to the login page and retry." dialog.  The login response already
arrives (the lobby is loaded), but the replacement never cancels this timer,
so the dialog appears on top of a working lobby and its OK button deadlocks
the game.

Fix: comment the single call out in place.  The replacement is exactly as long
as the original so no other byte of the ELF moves:

    "self:LoginTimeOut()"   (19 bytes)
    "-- no login timeout"   (19 bytes)

The Lua body stays valid:

    self.loginTimer = self:AddTimerOnce(20, function()
    -- no login timeout
    end)

The file gets 64 bytes of padding so its size differs from every previously
published asset (the loader compares sizes before downloading).
"""

from __future__ import annotations

import hashlib
from pathlib import Path

SRC = Path(r"C:\Users\user\Desktop\libs\libBangjo.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libBangjo.so"

OLD = b"self:LoginTimeOut()"
NEW = b"-- no login timeout"
PAD = 64


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def main() -> int:
    assert len(OLD) == len(NEW), (len(OLD), len(NEW))

    OUT_DIR.mkdir(parents=True, exist_ok=True)
    image = bytearray(SRC.read_bytes())

    if image.count(NEW):
        raise SystemExit("already patched")

    count = image.count(OLD)
    if count != 1:
        raise SystemExit(f"expected exactly one occurrence, found {count}")

    offset = image.find(OLD)
    image[offset:offset + len(OLD)] = NEW
    image += b"\x00" * PAD
    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC.read_bytes())}")
    print(f"output: {DST} size={len(image)} sha256={sha256(bytes(image))}")
    print(f"patch offset={offset:#x} {OLD!r} -> {NEW!r}")

    # Show the patched Lua region so the edit can be inspected.
    chunk = bytes(image[offset - 100:offset + 80]).decode("latin1")
    print("context:")
    print(chunk)
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
