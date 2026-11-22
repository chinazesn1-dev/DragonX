#ifndef RECOVERED_KENTOS_DEXO_APP_H
#define RECOVERED_KENTOS_DEXO_APP_H

#include <string>

struct DexoAimbotConfig {
    bool enable = false;
    bool ignore_knocked = true;
    bool ignore_bots = true;
    bool visible_check = false;
    bool bullet_track = false;
    bool ignore_knocked_bt = true;
    bool visible_check_bt = true;
    bool recoil_control = true;
    bool show_fov = true;
    int target = 0;          /* 0 Head, 1 Neck, 2 Chest */
    int mode = 0;            /* 0 Aim, 1 Tap, 2 Hold */
    float fov = 120.0f;
    float smooth = 1.0f;
    float distance = 100.0f;
};

struct DexoEspConfig {
    bool enable = false;
    bool show_bots = false;
    bool line = true;
    bool box = true;
    bool skeleton = false;
    bool health = true;
    bool name = true;
    bool distance = true;
    bool team_id = false;
    bool alert_360 = false;
    bool grenade_warn = true;
    bool vehicles = true;
    float max_distance = 300.0f;
    bool small_crosshair = false;
    bool fps_unlock = false;
    bool ipad_view = false;
    bool show_fps = false;
    int view = 0;
    float view_width = 0.0f;
    float crosshair_size = 1.0f;
};

struct DexoSkinConfig {
    bool enable = true;
    bool deadbox = true;
    bool kill_msg = true;
    bool lua = true;
    bool bangjo = true;
    int outfit = 0;
    int bag = 0;
    int helmet = 0;
    int vehicle = 0;
    int deadbox_id = 0;
};

struct DexoUiConfig {
    float opacity = 1.0f;
    float icon_opacity = 1.0f;
    int language = 0;
    bool menu_open = true;
};

struct DexoAppState {
    DexoAimbotConfig aim;
    DexoEspConfig esp;
    DexoSkinConfig skin;
    DexoUiConfig ui;
    bool lua_injected = false;
    std::string status = "KENTOS skin system: ON (auto).";
};

extern DexoAppState g_dexo_app;

/* Runtime callbacks wired by the platform layer. */
extern void (*g_dexo_force_lua_inject)();

bool load_dexo_config(const char* path = "/sdcard/Dexo/cheat_config.json");
bool save_dexo_config(const char* path = "/sdcard/Dexo/cheat_config.json");
bool clear_dexo_login_data();

#endif
