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
| Size | 11,898,672 bytes |
| SHA-256 | `8da6a1cc9978adce3781b39c2f84f3a42939eff810444df7455c3cdab9b5b209` |
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

## Still to port

The memory-reading gameplay layer (player/vehicle/grenade iteration, world-to-
screen projection, bone ESP, aimbot target selection and Lua execution) lives in
the remaining decompiled functions under `source/decompiled/`. The source build
currently provides the real UI, configuration, hooking and render pipeline; the
gameplay readers are the next reconstruction step.
