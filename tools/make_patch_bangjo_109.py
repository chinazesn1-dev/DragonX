#!/usr/bin/env python3
"""Release 1.0.9: really stop the "Server did not respond" dialog.

The whole DEXO Lua payload is one long script (plus a few later chunks).
A later block disables the login module entry points:

    local funcs = {
        "EncryptionManagerPre", "FromUpdateToLogin", "SetupFilenameHideKeywords",
        "PakMonitorStart", "reqLoginLobby", "SetIgnoreResourceVersion",
        ...
    }
    for _, f in ipairs(funcs) do lm[f] = function() return 0 end end

So ``reqLoginLobby`` ends up as ``function() return 0 end``: the client never
asks the lobby server for a login, the account panel still opens from cached
data, and the game's own login watchdog fires:

    "Сервер не ответил. Вернитесь на страницу входа и повторите попытку."

That dialog is ``login_module:LoginTimeOut()``.  Its OK button returns to the
login screen, which then deadlocks because ``reqLoginLobby`` is a no-op.

Fix in one 34-byte replacement of two adjacent list entries:

    "PakMonitorStart", "reqLoginLobby"
    "PakMonitorStart" , "LoginTimeOut"

``reqLoginLobby`` is 13 characters, ``LoginTimeOut`` is 12, so the extra space
before the comma keeps the byte count identical.  The entry now silences
``LoginTimeOut`` instead of ``reqLoginLobby``:
  * the real lobby login runs again, so there is no timeout in the first place;
  * even if some other code times out, the dialog never appears.

The 1.0.8 edit (the 20 second timer inside the earlier copy of
``reqLoginLobby`` is commented out) is kept as well.  33 bytes change in
total and the ELF layout is untouched.
"""

from __future__ import annotations

import hashlib
from pathlib import Path

SRC = Path(r"C:\Users\user\Desktop\libs\libBangjo.so")
OUT_DIR = Path(r"C:\Users\user\Desktop\libs\recovered\build\patched")
DST = OUT_DIR / "libBangjo.so"

EDITS = [
    (b"self:LoginTimeOut()", b"-- no login timeout"),
    (b'"PakMonitorStart", "reqLoginLobby"', b'"PakMonitorStart" , "LoginTimeOut"'),
]
PAD = 96


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def main() -> int:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    image = bytearray(SRC.read_bytes())

    for old, new in EDITS:
        assert len(old) == len(new), (old, new)
        if image.count(new):
            raise SystemExit(f"already patched: {new!r}")
        count = image.count(old)
        if count != 1:
            raise SystemExit(f"expected one {old!r}, found {count}")
        offset = image.find(old)
        image[offset:offset + len(old)] = new
        print(f"patch {offset:#x}: {old!r} -> {new!r} ({len(old)} bytes)")

    image += b"\x00" * PAD
    DST.write_bytes(image)

    print(f"source: {SRC} size={SRC.stat().st_size} sha256={sha256(SRC.read_bytes())}")
    print(f"output: {DST} size={len(image)} sha256={sha256(bytes(image))}")

    i = bytes(image).find(b"LoginTimeOut")
    print("context:")
    print(bytes(image)[i - 420:i + 220].decode("latin1"))
    print("PATCH_OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
