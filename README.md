# DEXO / KENTOS libraries

Distribution repository for the Android ARM64 libraries used by the DEXO online loader.

The loader requests the files from:

```text
https://github.com/chinazesn1-dev/DragonX/releases/latest/download/libkentos.so
https://github.com/chinazesn1-dev/DragonX/releases/latest/download/libBangjo.so
```

`releases/latest/download/...` always resolves to the newest published (non-draft,
non-prerelease) release, so publishing a new release is enough for the loader to
pick the files up on its next start.

## Version 1.0.2

Changes in `libkentos.so`:

* The DEXO login window and the online key activation are removed.
* The licence checker `FUN_001e8780` now always reports success.
* The normal floating menu button and the normal in-game menu are preserved.

`libBangjo.so` is unchanged.

### Artifacts

| File | Size | SHA-256 |
| --- | ---: | --- |
| `libkentos.so` | 7,465,824 | `9b64d3c786320df5136de0268f4b576cddd6caab6ffca5c706687fe999b83e37` |
| `libBangjo.so` | 9,023,528 | `c5b4aa2be47d87dd595ba328fce6ebcd34851ad5eefda0257ce236a3df23aefc` |

The original, unmodified `libkentos.so` was 7,465,808 bytes with SHA-256
`a6246b9df1ae22ad010b9ad8e84cc110447025acc7d007ba40124f6d340a8d86`.

### Binary patch

The patch is applied by `tools/make_patch.py`:

| Virtual address | Original | Patched | Purpose |
| --- | --- | --- | --- |
| `0x0ec878` | `cbz w8, 0x0ec8b0` | `nop` | Never enter the login branch |
| `0x0e8780` | licence-check prologue | `mov w0, #1; ret` | Licence check always succeeds |

Sixteen zero bytes are appended to the file after patching. This changes the
size so the loader's `upToDate()` check cannot treat the old file as current
even if the HTTP `ETag`/`Last-Modified` headers are unavailable. Trailing bytes
after the last ELF section do not affect `dlopen`.

### Verification

`tools/gate_test.py` runs the original and patched libraries in Unicorn and
checks the render dispatcher at `0x0ec870`:

```text
original_gate:  login_called=True
patched_gate:   login_called=False, floating_called=True
patched_menu:   login_called=False, menu_called=True
original_licence: x0=0
patched_licence:  x0=1
GATE_TEST_OK
```

`tools/unicorn_probe.py` also confirms that the patched ELF still executes
exported code (`shadowhook_get_version` returns `shadowhook version 1.0.9`).

## Source recovery

`source/decompiled/` contains the Ghidra 12.2 decompilation of the application
region of `libkentos.so` (addresses `0xd59d0`-`0x100204`, plus the indirect
entry points at `0xd8294`, `0xd83d0`, `0xd83d4` and `0xeb5dc`).
`source/reconstructed/` contains the already reconstructed C/C++ modules
(login window, key transport, ImGui/Android glue) used for behavioural
comparison.

A compilable source build now exists: `source/reconstructed/dexo_app.cpp`,
`dexo_menu.cpp`, `dexo_hooks.c` and `dexo_entry.cpp` are linked into
`dist/source-build/libdexo_kentos.so` (12,301,184 bytes, SHA-256
`6e6fa83e9d71ba5061feb73df091e640de8cfabeafdf2aacfc2a8aca60314ee5`).
It implements the real menu, JSON configuration, PLT/GOT hooking,
`eglSwapBuffers` interception and the ImGui Android/GLES3 pipeline.
See `docs/SOURCE_BUILD.md`. The gameplay memory readers and Lua injection
are still being ported; the patched binary remains the shipped artifact.

## Rebuilding the patch

```powershell
$env:PYTHONPATH = 'C:\Users\user\Downloads\build-tools\reverse-engineering\analysis-python'
python tools/make_patch.py
python tools/gate_test.py dist/libkentos.so
```



