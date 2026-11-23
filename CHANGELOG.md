# Changelog

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
