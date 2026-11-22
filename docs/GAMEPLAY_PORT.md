# Gameplay port

The gameplay layer was extracted from the decompiled application functions and
moved into `dexo_gameplay.cpp` / `dexo_lua.cpp`, built into `dexo_kentos`.

## Aimbot target selection

Original function: `FUN_001dbdd8` (ELF `0x0dbdd8`).

The original iterates the entity list, rejects invalid/dead entities, checks
team id (`+0x990`), knock-down (`+0xe70`), bot flag (`+0xa69`), visibility
(`FUN_00266010`), the configured distance (`DAT_008206a4`), obtains the `Root`
and `Head` bone positions (`FUN_00267448`), projects both with `FUN_00266308`
and keeps the entity whose screen centre is closest to the crosshair, limited by
the FOV diameter (`DAT_0082075c`).

Reconstruction:

```cpp
const DexoPlayer* dexo_select_aim_target(const DexoWorld& world,
                                         const DexoMat4& view_projection,
                                         const DexoAimbotConfig& config,
                                         DexoVec2 crosshair,
                                         int screen_width, int screen_height,
                                         float* out_screen_distance);
```

It keeps the same filters and selection rule (closest head/root centre), and
uses the original `Root`/`Head` bone names.

## World to screen

Original: `FUN_00266308` — perspective transform followed by the UE4 Y flip.

Reconstruction: `dexo_world_to_screen()` in `dexo_gameplay.cpp`, row-major 4x4
matrix, `w <= 0` culling and a 25% screen margin for partially visible boxes.

## ESP

The skeleton bone names were recovered from `FUN_001dbdd8`, `FUN_001ddda4`,
`FUN_001de080` and `FUN_001e0eac`: `Root`, `Head`, `neck_01`, `hand_l`, `hand_r`,
`foot_l`, `foot_r`, `calf_l`, `calf_r`, `pelvis`, `upperarm_l/r`,
`lowerarm_l/r`, `thigh_l/r`.

`dexo_build_player_esp()` produces:

* box corners from the projected head and root;
* a line from the bottom screen centre to the feet;
* skeleton segments from the original bone pairs;
* name and distance label.

`dexo_project_vehicle()` and `dexo_project_grenade()` cover the vehicle and
grenade markers.

## Lua skin system

Names recovered from `FUN_001e3220` and `FUN_001f3a4c`:

| Slot | Lua resource | Config key |
| --- | --- | --- |
| Outfit | `lua_outfit_res` | `outfit_res` |
| Hat | `lua_hat_res` | — |
| Mask | `lua_mask_res` | — |
| Top | `lua_top_res` | — |
| Pants | `lua_pants_res` | — |
| Shoes | `lua_shoes_res` | — |
| Bag | `lua_bag_res` | `bag_res` |
| Helmet | `lua_helmet_res` | `helmet_res` |
| Vehicle | `lua_vehicle_res` | `vehicle_res` |
| Weapon | `lua_wskin_%d` | `wskin_` |

`dexo_lua_request_inject()` implements the `Force Inject Lua Now` button; the
render loop consumes the request and updates the original status strings.

## Offline verification

`tests/dexo_gameplay_test.cpp` is compiled with MSVC and runs the pure
algorithms without Android:

```text
dexo_gameplay_test.cpp
dexo_gameplay.cpp
dexo_lua.cpp
failures=0
```

It checks:

* identity projection maps the world origin to the screen centre;
* team/bot/knocked/visibility filters and the FOV limit;
* selection of the nearest valid target;
* ESP box and non-empty skeleton;
* `spine_03` present in the bone table;
* Lua names `lua_outfit_res`, `lua_vehicle_res`, `lua_wskin_123`, `bag_res`;
* injection request queue and status strings.

The Android build exports `dexo_gameplay_select_target`,
`dexo_gameplay_anchor` and `dexo_lua_resource_name`.
