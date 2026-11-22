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
| Size | 13,335,272 bytes |
| SHA-256 | `8bf19c6e645547b8c4dc3993591eab40a5b0a0dba898b5d0b6461df3e6cd9815` |
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

`dexo_gameplay.cpp` ports target selection (`FUN_001dbdd8`), world-to-screen
(`FUN_00266308`), the ESP box/skeleton builder and vehicle/grenade projection.
`dexo_ue4.cpp` implements the live UE4 reflection layer (GObjects, FNamePool,
`ProcessEvent`, entity list, `GetBoneLocation`, `GetDistanceTo`,
`LineOfSightTo`, `ProjectWorldToScreen`), feeds the ESP renderer and applies the
aimbot through `FindLookAtRotation` + `AddControllerYawInput` /
`AddControllerPitchInput`. Skin application is ported from `FUN_001f35a0`
(weapon avatar item array + `DelayHandleAvatarMeshChanged`) and `FUN_001f3898`
(`VehicleAvatarComponent.ChangeItemAvatar`). `dexo_lua.cpp` binds the game Lua state, resolves
`luaL_loadbufferx`/`lua_pcall` and executes the original `fps165` chunk. The
`dexo_lua_capture_install()` inline hook captures the game `lua_State` on the
first Lua call.
`tests/dexo_gameplay_test.cpp` still reports `failures=0`.

Still to verify on a device: the exact UE4 offsets and `ProcessEvent` parameter
layouts, the Lua state binding, and the runtime behaviour of the source build.







