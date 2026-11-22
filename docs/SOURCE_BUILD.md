# Source build

The reconstructed application modules now produce a complete shared object with
the Android toolchain:

```powershell
$sdk = 'C:\Users\user\Downloads\build-tools\android-sdk'
$cmake = "$sdk\cmake\3.22.1\bin\cmake.exe"
& $cmake -S recovered/libkentos -B recovered/build/kentos-source -G Ninja `
    "-DCMAKE_MAKE_PROGRAM=$sdk/cmake/3.22.1/bin/ninja.exe" `
    "-DCMAKE_TOOLCHAIN_FILE=$sdk/ndk/android-ndk-r18b/build/cmake/android.toolchain.cmake" `
    -DANDROID_ABI=arm64-v8a -DANDROID_PLATFORM=android-21 -DCMAKE_BUILD_TYPE=Release
& $cmake --build recovered/build/kentos-source --target dexo_kentos --parallel
```

Result:

| Property | Value |
| --- | --- |
| File | `libdexo_kentos.so` |
| Size | 12,301,184 bytes |
| SHA-256 | `6e6fa83e9d71ba5061feb73df091e640de8cfabeafdf2aacfc2a8aca60314ee5` |
| Machine | AArch64, ELF64 shared object |
| NEEDED | `libandroid.so`, `libEGL.so`, `libGLESv3.so`, `liblog.so`, `libm.so`, `libdl.so`, `libc.so` |

Exported entry points:

```text
dexo_entry_constructor
dexo_install_hooks_now
```

`dexo_entry_constructor` is present in `.init_array` and starts the hook thread.

## Implemented in the source build

* `dexo_app.cpp` — application state and the `cheat_config.json` loader/saver
  using the original key names (`Aimbot_Enable`, `ESP_Skeleton`, `Skin_Enable`,
  …), plus removal of the saved DEXO login data.
* `dexo_menu.cpp` — AIM, ESP, SETTINGS, SKIN, ACCOUNT and ABOUT tabs with the
  original labels (`AIM SETTINGS`, `PLAYER ESP`, `LUA SKIN HACK (KENTOS)`,
  `Force Inject Lua Now`, `Save Config Now`, …).
* `dexo_hooks.c` — self-contained ELF PLT/GOT patcher built on
  `dl_iterate_phdr`; patches every loaded module that imports a symbol.
* `dexo_entry.cpp` — waits for `libUE4.so`, hooks `eglSwapBuffers` across the
  loaded modules, queries the EGL surface size, initializes the ImGui Android
  and OpenGL ES3 backends, draws the menu and calls the original swap function.
  It also hooks `ANativeWindow_getWidth`/`getHeight`.
* Login window is not part of the source build; the menu is available directly.

Verified strings inside the built object:

```text
AIM SETTINGS
PLAYER ESP
LUA SKIN HACK (KENTOS)
Aimbot_Enable
ESP_Skeleton
Force Inject Lua Now
KENTOS skin system
```

## Gameplay layer

`dexo_gameplay.cpp` now ports the aimbot target selection (`FUN_001dbdd8`),
world-to-screen projection (`FUN_00266308`), the ESP box/skeleton builder and
vehicle/grenade projection. `dexo_lua.cpp` ports the KENTOS skin resource names
and the injection request. Both are linked into `dexo_kentos` and covered by
`tests/dexo_gameplay_test.cpp` (`failures=0`). See `docs/GAMEPLAY_PORT.md`.

Still to port: reading the live UE4 entity list and offsets, obtaining the
current view-projection matrix, drawing the ESP primitives through ImGui, and
executing the Lua script in the game VM.



