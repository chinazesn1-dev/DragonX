# Changelog

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
