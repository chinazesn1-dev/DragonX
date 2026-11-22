# Recovery status

## Original library

`libkentos.so` is an Android ARM64 shared object (7,465,808 bytes, SHA-256
`a6246b9d...`). It statically links OpenSSL 1.1.0c, curl 7.51.0, libc++/libc++abi,
ImGui, Dobby, ByteHook and the application code.

Sections:

| Section | Size |
| --- | ---: |
| `.text` | 2,764,772 |
| `.rodata` | 2,104,769 |
| `.gcc_except_table` | 502,748 |
| `.eh_frame` | 136,576 |
| `.bss` | 82,864 |

The application code occupies the beginning of `.text`, roughly
`0x0d59d0`-`0x0100204`. The rest of `.text` is third-party code.

## Application entry chain

| Address | Role |
| --- | --- |
| `0x0d84c8` | `.init_array` constructor: `pthread_create(0x0d8294)` |
| `0x0d8294` | thread: waits for `libBangjo.so`, opens it, hooks `glDrawElements`, starts `0x0d83d4` |
| `0x0d83d4` | thread: waits for the module base, applies five byte patches, re-installs the hook every 10 iterations |
| `0x0eb5dc` | `eglSwapBuffers(display, surface)` hook: ImGui frame, login/menu dispatch, calls the saved original |
| `0x0e7354` | DEXO login window |
| `0x0e8afc` | in-game menu (AIM / ESP / skin / config) |
| `0x0e8780` | licence check (FNV-1a hashes and 32-byte key comparison) |
| `0x0e6478` | floating `LogoBtn`; sets the menu-open flag |

The render hook dispatches at `0x0ec850`:

```text
DAT_0082f564 == 0  -> login window
DAT_0082f4a0 == 1  -> menu
otherwise          -> floating logo button
```

## Decompilation coverage

Ghidra 12.2 was run headless with an image base of `0x100000`. It produced
11,819 functions; 204 application functions were decompiled into
`source/decompiled/`. This includes the indirect entry points that Ghidra did
not create automatically:

* `0x0d8294` (thread entry)
* `0x0d83d0`, `0x0d83d4` (hook stub and second thread)
* `0x0eb5dc` (render hook, 1,501 lines of C)

## Reconstructed modules

`source/reconstructed/` contains hand-written C/C++ equivalents:

* login window drawing and input handling;
* key transport (HTTP request/response, JSON reply, key parsing);
* Android glue (clipboard, device serial, launch URL, texture loader);
* ImGui Android/OpenGL ES3 backends and embedded fonts;
* OpenSSL version and `X509_VERIFY_PARAM` helpers.

`build-validation.ps1` builds these modules against the vendored OpenSSL and
curl sources and links a validation shared object:

```text
Original bytes: 7465808, rebuilt bytes: 5296928, identical: False
```

The validation object is a functional subset, not a replacement for the full
library. Byte-identical rebuilding remains a separate task because the original
object files and Obfuscator-LLVM configuration are unavailable.

## Remaining clean-room work

* hand reconstruction of the menu, ESP, aimbot, skin/Lua and config modules from
  `source/decompiled/00000000001e8afc_FUN_001e8afc.c` and the neighbouring
  functions;
* replacement of the statically linked third-party code with the vendored
  sources at matching versions;
* full symbol and behaviour comparison against the original library.

The shipped 1.0.2 artifact is the original binary with the two-instruction
login/licence patch described in `docs/PATCH.md`, not a clean-room rebuild.
