# Changelog

## 1.0.10

* Restores the lobby login. The cheat re-runs `ClientEntryBypass()` every 2 seconds (`AddTimerLoop(2.0, StartBypass_VIP_v4, -1, 1)`), and it calls `lolol()`, which sets `login_module.reqLoginLobby = function() return 0 end`. That is an anti-ban measure: no repeated login packets and no reaction to login failures. Side effect: the real lobby login never goes out, the game watchdog shows "Сервер не ответил. Вернитесь на страницу входа и повторите попытку.", and OK deadlocks on the disabled login.
* Fix: `lolol()` now silences `LoginTimeOut` instead of `reqLoginLobby` (`login_module.LoginTimeOut  = function() return 0 end`, same 52 bytes). The lobby login implementation survives and the dialog can no longer be raised.
* The late bypass list in the third Lua chunk is patched the same way, and the 20 second timer body is still commented out.
* After the patch `reqLoginLobby` appears exactly once in the file (the real implementation), with zero active `self:LoginTimeOut()` calls.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,856 | `e40f38eb1e6fa5077697672d6e4e33e0337fff5094f73de4f61f21aa07d5939f` |
| `libBangjo.so` | 9,023,656 | `a91f3488d5f1d9d561216c2394a83aaad043e65352e2174d440ad6b3673912da` |

## 1.0.9

* The 1.0.8 attempt edited the wrong copy of the login bypass. The DEXO Lua payload is one long script and a later block re-disables the login entry points:

```lua
local funcs = { ... "PakMonitorStart", "reqLoginLobby", ... }
for _, f in ipairs(funcs) do lm[f] = function() return 0 end end
```

* So `reqLoginLobby` became a no-op: the lobby login request was never sent, the account panel still opened from cached data, and the game login watchdog showed "Сервер не ответил. Вернитесь на страницу входа и повторите попытку.". Its OK button then deadlocked on the disabled login.
* Fix: that list entry now names `LoginTimeOut` instead of `reqLoginLobby` (`"PakMonitorStart", "reqLoginLobby"` -> `"PakMonitorStart" , "LoginTimeOut"`, same 34 bytes). The real lobby login runs again, and the timeout dialog can no longer appear.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,856 | `e40f38eb1e6fa5077697672d6e4e33e0337fff5094f73de4f61f21aa07d5939f` |
| `libBangjo.so` | 9,023,624 | `a2ffd40367d13373b3073ac98a9bced14ece3fec1f33ced9107a0f1358b22801` |

## 1.0.8

* Removes the spurious "Server did not respond. Return to the login page and retry." dialog that appeared over a working lobby and deadlocked the game when its OK button was pressed.
* Cause: the DEXO Lua bypass replaces `login_module.reqLoginLobby` and arms a 20 second `AddTimerOnce` that calls `self:LoginTimeOut()`. The login response arrives (the lobby is loaded) but that timer is never cancelled.
* Fix: the single `self:LoginTimeOut()` call inside the timer is commented out in place (`self:LoginTimeOut()` -> `-- no login timeout`, same 19 bytes), so nothing else in the ELF moves.
* libkentos.so is unchanged from 1.0.7 (licence bypass + forced feature flag).

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,856 | `e40f38eb1e6fa5077697672d6e4e33e0337fff5094f73de4f61f21aa07d5939f` |
| `libBangjo.so` | 9,023,592 | `92a4d829531efba69a4693bda88315feb46a5cb13dc4249e7b39be46c96e0562` |

## 1.0.7

* Enables the feature code by forcing the licence flag `DAT_0082f2c0` to 1.
* Without a key the login path never runs, so the flag (ELF `0x72f2c0`) stayed 0. The licensed original has it at 1 and every feature gate reads it.
* Forced at all three read sites: `0xdcdf4` (game overlay: ESP, FOV, aimbot), `0xe5220` (status path), `0xe88b4` (licence routine body) - each `ldrb w8,[x8,#704]` -> `mov w8,#1`.
* Keeps the 1.0.6 trampoline (body runs, verdict 1) and the login window nop.

Verification (Unicorn): 271 steps, `DAT_0082f8d0` bytes identical to the original.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,856 | `e40f38eb1e6fa5077697672d6e4e33e0337fff5094f73de4f61f21aa07d5939f` |
| `libBangjo.so` | 9,023,560 | `03c8b955d0b69a5992b3b2e45a683e5ebfbf635e0434fb1e493e976b77739697` |

## 1.0.6

* Fixes the 1.0.5 freeze before the login screen.
* Cause: the 1.0.5 trampoline did `bl body`, which overwrites `x30` with the
  return address into the cave. The body saves and restores that same `x30`, so
  its `ret` returned into the cave again; `mov w0,#1; ret` jumped there again -
  an endless loop on the render thread.
* Fixed trampoline: it allocates `0x40`, keeps the caller `x30` in the spare
  `[sp+0x30]` slot (the body only uses `[sp .. sp+0x2F]`), restores it after the
  body returns, forces `w0 = 1` and releases the extra `0x10`.
* Login bypass and the `DAT_0082f8d0` initialisation are unchanged.

Verification (Unicorn):

```text
original: 264 steps, DAT_0082f8d0 = 0b0e151208131e09...
1.0.5:    20001 steps (loop)  <- the freeze
1.0.6:    271 steps,  DAT_0082f8d0 = 0b0e151208131e09... (identical)
```

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,840 | `88d0696a0ffb525c7b51c2402dd76314b9c37c76619598d04f60e5036438064d` |
| `libBangjo.so` | 9,023,560 | `03c8b955d0b69a5992b3b2e45a683e5ebfbf635e0434fb1e493e976b77739697` |

## 1.0.5

* Fixes the regression introduced in 1.0.2/1.0.3: the menu opened but every
  feature stayed dead.
* Root cause: `FUN_001e8780` is not a pure licence predicate. Before any key
  check it performs a one time initialisation and decrypts the static string at
  `DAT_0082f8d0` (`__cxa_guard_acquire` + `FUN_001f58d0`). That string is read
  by 60+ sites outside the function (`0xe8b70`, `0xe8db0`, `0xea610`, ...), so
  the rest of the library consumes it.
* The old patch replaced the whole entry with `mov w0,#1; ret`, so the
  initialisation never ran and the rest of the library worked on undecrypted
  data. The menu still drew; every feature did not.
* New patch: entry `0xe8780` jumps to a trampoline in the code cave at
  `0xda47c`, which replays the two displaced prologue instructions, calls the
  real body at `0xe8788` (all side effects happen) and then overrides the
  result with `1`.
* The 1.0.3 change at `0xd8368` is reverted, because the unmodified library
  works on the device and that call belongs to the original behaviour.

Verification (`tools/probe_auth_trampoline.py`, Unicorn):

```text
1.0.3: body_entered=False reached_tail=False sp_balanced=False w0=1 steps=2
1.0.5: body_entered=True  reached_tail=True  sp_balanced=True  w0=1 steps=28
```

Side effect check (`tools/probe_auth_side_effect.py`, Unicorn, 32 bytes at
`DAT_0082f8d0`):

```text
original  initialized=True   after: 0b0e151208131e09760b1a151e177608121c760d6a5b...
1.0.3     initialized=False  after: 00000000...
1.0.5     initialized=True   after: 0b0e151208131e09760b1a151e177608121c760d6a5b...
```

1.0.5 reproduces the original bytes exactly.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,824 | `04cff22ad4bd47a3a50edb5855857c28f4f96d0b4c22e246b1ea918839cbff40` |
| `libBangjo.so` | 9,023,560 | `03c8b955d0b69a5992b3b2e45a683e5ebfbf635e0434fb1e493e976b77739697` |

## 1.0.4

* First real patch inside `libBangjo.so` (the release 1.0.3 shipped it unchanged).
* Root cause: the engine config path resolver at `0x481e14` picks between
  `/sdcard/config.txt` and `/sdcard/Android/data/<package>/files/config.txt`.
  On the device the package derived file does not exist, so the engine never
  read a configuration at all.
* Patch `0x481e48`: `tbz w0, #0, 0x481e80` is replaced with `nop`, so the
  resolver always returns `/sdcard/config.txt`, a stable path that is writable
  without root. Both branches converge at `0x481edc` and destroy the temporary
  package string, so the change is balanced.
* `libkentos.so` is the 1.0.3 build (login bypass + `0xd8368` nop) and is
  unchanged in this release.

Verification (`tools/probe_bangjo_config.py`, Unicorn, `w0 = 0`):

```text
original  path_branch=False pkg_branch=True  assign_arg=none     done=False
patched   path_branch=True  pkg_branch=False assign_arg=0x16a5ef done=True
```

`0x16a5ef` is the `/sdcard/config.txt` literal, so the patched resolver really
returns that path.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,872 | `37300e5f40c7e45915f742f5cbba247891e432054eeaaeb64a7ded7e0d3d3b2f` |
| `libBangjo.so` | 9,023,560 | `03c8b955d0b69a5992b3b2e45a683e5ebfbf635e0434fb1e493e976b77739697` |

## 1.0.3

* Fixed why every menu toggle had no visible effect.
* Root cause: `libkentos.so` opened a plthook handle for `libBangjo.so` and
  replaced the engine's `glDrawElements` GOT slot (`relocation glDrawElements`
  at `0x7d4af8` inside `libBangjo.so`) with a bare `ret`, so the whole overlay
  renderer of the engine became a no-op. At the same time the libkentos overlay
  renderer `FUN_001dcdb0` is gated by `[0x72f468]`, a `.bss` byte that is never
  written anywhere in the library, so it could not draw either.
* Patch `0xd8368`: the `plthook_replace(handle, "glDrawElements", ret_stub,
  &old)` call is replaced with `nop`. `libkentos.so` keeps its own PLT entry, so
  the DEXO menu still renders, and the engine keeps its real `glDrawElements`.
* Kept the 1.0.2 login bypass (`0xe8780` -> `mov w0,#1; ret`, `0xec878` -> nop).
* `libBangjo.so` unchanged.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,872 | `37300e5f40c7e45915f742f5cbba247891e432054eeaaeb64a7ded7e0d3d3b2f` |
| `libBangjo.so` | 9,023,528 | `c5b4aa2be47d87dd595ba328fce6ebcd34851ad5eefda0257ce236a3df23aefc` |

## 1.0.2

* Removed the DEXO login window and online key activation from `libkentos.so`.
* Licence checker `FUN_001e8780` now returns success.
* Preserved the floating menu button and the normal in-game menu.
* `libBangjo.so` unchanged.
* Added the decompiled application sources, reconstructed modules, patch script
  and differential Unicorn test.
* Confirmed on a real device: the CRACK_DEXOv2 loader downloaded the release,
  the login window did not appear and the main menu opened immediately.

Artifacts:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,824 | `9b64d3c786320df5136de0268f4b576cddd6caab6ffca5c706687fe999b83e37` |
| `libBangjo.so` | 9,023,528 | `c5b4aa2be47d87dd595ba328fce6ebcd34851ad5eefda0257ce236a3df23aefc` |

## 1.0.1

* Previous DEXO online libraries.

