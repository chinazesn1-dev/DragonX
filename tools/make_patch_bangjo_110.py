#!/usr/bin/env python3
"""Release 1.0.10: make the login fix hold on every code path.

Verification of 1.0.9 found a third writer that 1.0.9 did not cover:

  script A (0x10e381..0x1165e0)
    local function lolol()
        ...
        login_module.reqLoginLobby = function() return 0 end   <- 0x1100ac
        ...
    end
    ...
    local function ClientEntryBypass()
        pcall(function()
            lolol()                                            <- 0x11594b
            ...

  script C (0x1181b5..0x12a347)
    local funcs = { ... "PakMonitorStart", "reqLoginLobby", ... }
    for _, f in ipairs(funcs) do lm[f] = function() return 0 end end

1.0.9 fixed script C only, so ``ClientEntryBypass()`` could still turn
``reqLoginLobby`` into a no-op and the login watchdog kept firing.

Three in-place edits, each exactly the same length as the original bytes:

  1. script A, 0x111f5b  "self:LoginTimeOut()"
                         -> "-- no login timeout"                 (19 -> 19)
     the 20 s timer inside the custom reqLoginLobby cannot raise the dialog.

  2. script A, 0x1100ac  "login_module.reqLoginLobby = function() return 0 end"
                         -> "login_module.LoginTimeOut  = function() return 0 end"
                                                                 (52 -> 52)
     lolol() now silences LoginTimeOut instead of reqLoginLobby, so the
     custom reqLoginLobby (which really sends send_login) survives.

  3. script C, 0x11c7c9  '"PakMonitorStart", "reqLoginLobby"'
                         -> '"PakMonitorStart" , "LoginTimeOut"' (34 -> 34)
     the late bypass list silences LoginTimeOut instead of reqLoginLobby.

Net effect: no code path assigns a no-op to reqLoginLobby any more, and no
code path can display the login timeout dialog.
"""

from __future__ import annotations

import hashlib
from pathlib import Path

SRC = Path(r"C:\Users\user\Desktop\libs\libBangjo.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libBangjo.so"

EDITS = [
    (b"self:LoginTimeOut()", b"-- no login timeout"),
    (
        b"login_module.reqLoginLobby = function() return 0 end",
        b"login_module.LoginTimeOut  = function() return 0 end",
    ),
    (b'"PakMonitorStart", "reqLoginLobby"', b'"PakMonitorStart" , "LoginTimeOut"'),
]
PAD = 128


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def main() -> int:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    image = bytearray(SRC.read_bytes())

    for old, new in EDITS:
        assert len(old) == len(new), (old, new, len(old), len(new))
        count = image.count(old)
        if count != 1:
            raise SystemExit(f"expected one {old!r}, found {count}")
        if image.count(new) and old != new:
            raise SystemExit(f"already patched: {new!r}")
        offset = image.find(old)
        image[offset:offset + len(old)] = new
        print(f"patch {offset:#x}: {old!r} -> {new!r} ({len(old)} bytes)")

    image += b"\x00" * PAD
    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC.read_bytes())}")
    print(f"output: {DST} size={len(image)} sha256={sha256(bytes(image))}")
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
