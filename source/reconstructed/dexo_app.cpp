#include "dexo_app.h"

#include <cstdio>
#include <cstring>
#include <fstream>
#include <sys/stat.h>
#include <unistd.h>

#include "json.hpp"

DexoAppState g_dexo_app;
void (*g_dexo_force_lua_inject)() = nullptr;

namespace {

using json = nlohmann::json;

json to_json(const DexoAppState& s)
{
    json j;
    j["Aimbot_Enable"] = s.aim.enable;
    j["Aimbot_IgnoreKnocked"] = s.aim.ignore_knocked;
    j["Aimbot_IgnoreBots"] = s.aim.ignore_bots;
    j["Aimbot_VisCheck"] = s.aim.visible_check;
    j["Aimbot_BulletTrack"] = s.aim.bullet_track;
    j["Aimbot_IgnoreKnockedBT"] = s.aim.ignore_knocked_bt;
    j["Aimbot_VisCheckBT"] = s.aim.visible_check_bt;
    j["Aimbot_RecoilHold"] = s.aim.recoil_control;
    j["Aimbot_ShowFOV"] = s.aim.show_fov;
    j["Aimbot_Target"] = s.aim.target;
    j["Aimbot_Mode"] = s.aim.mode;
    j["Aimbot_Cross"] = s.aim.fov;
    j["Aimbot_Smooth"] = s.aim.smooth;
    j["Aimbot_Meter"] = s.aim.distance;

    j["ESP_Enable"] = s.esp.enable;
    j["ESP_ShowBots"] = s.esp.show_bots;
    j["ESP_Line"] = s.esp.line;
    j["ESP_Box"] = s.esp.box;
    j["ESP_Skeleton"] = s.esp.skeleton;
    j["ESP_Health"] = s.esp.health;
    j["ESP_Name"] = s.esp.name;
    j["ESP_Distance"] = s.esp.distance;
    j["ESP_TeamID"] = s.esp.team_id;
    j["ESP_Alert"] = s.esp.alert_360;
    j["ESP_Grenade"] = s.esp.grenade_warn;
    j["ESP_Vehicle"] = s.esp.vehicles;
    j["ESP_Meter"] = s.esp.max_distance;
    j["ESP_SmallCross"] = s.esp.small_crosshair;
    j["ESP_FPSUnlock"] = s.esp.fps_unlock;
    j["ESP_iPadView"] = s.esp.ipad_view;
    j["ESP_ShowFPS"] = s.esp.show_fps;
    j["ESP_View"] = s.esp.view;
    j["ESP_ViewWidth"] = s.esp.view_width;
    j["ESP_CrossSize"] = s.esp.crosshair_size;

    j["Skin_Enable"] = s.skin.enable;
    j["Skin_Deadbox"] = s.skin.deadbox;
    j["Skin_KillMsg"] = s.skin.kill_msg;
    j["Skin_Lua"] = s.skin.lua;
    j["Skin_BangJo"] = s.skin.bangjo;
    j["Skin_Outfit"] = s.skin.outfit;
    j["Skin_Bag"] = s.skin.bag;
    j["Skin_Helmet"] = s.skin.helmet;
    j["Skin_Vehicle"] = s.skin.vehicle;

    j["UI_Opacity"] = s.ui.opacity;
    j["UI_IconOpacity"] = s.ui.icon_opacity;
    j["UI_Language"] = s.ui.language;
    j["UI_MenuOpen"] = s.ui.menu_open;
    return j;
}

template <typename T>
void read_bool(const json& j, const char* key, T& value)
{
    auto it = j.find(key);
    if (it != j.end() && it->is_boolean()) {
        value = it->get<bool>();
    }
}

template <typename T>
void read_int(const json& j, const char* key, T& value)
{
    auto it = j.find(key);
    if (it != j.end() && it->is_number_integer()) {
        value = static_cast<T>(it->get<int>());
    }
}

template <typename T>
void read_float(const json& j, const char* key, T& value)
{
    auto it = j.find(key);
    if (it != j.end() && it->is_number()) {
        value = static_cast<T>(it->get<float>());
    }
}

void from_json(const json& j, DexoAppState& s)
{
    read_bool(j, "Aimbot_Enable", s.aim.enable);
    read_bool(j, "Aimbot_IgnoreKnocked", s.aim.ignore_knocked);
    read_bool(j, "Aimbot_IgnoreBots", s.aim.ignore_bots);
    read_bool(j, "Aimbot_VisCheck", s.aim.visible_check);
    read_bool(j, "Aimbot_BulletTrack", s.aim.bullet_track);
    read_bool(j, "Aimbot_IgnoreKnockedBT", s.aim.ignore_knocked_bt);
    read_bool(j, "Aimbot_VisCheckBT", s.aim.visible_check_bt);
    read_bool(j, "Aimbot_RecoilHold", s.aim.recoil_control);
    read_bool(j, "Aimbot_ShowFOV", s.aim.show_fov);
    read_int(j, "Aimbot_Target", s.aim.target);
    read_int(j, "Aimbot_Mode", s.aim.mode);
    read_float(j, "Aimbot_Cross", s.aim.fov);
    read_float(j, "Aimbot_Smooth", s.aim.smooth);
    read_float(j, "Aimbot_Meter", s.aim.distance);

    read_bool(j, "ESP_Enable", s.esp.enable);
    read_bool(j, "ESP_ShowBots", s.esp.show_bots);
    read_bool(j, "ESP_Line", s.esp.line);
    read_bool(j, "ESP_Box", s.esp.box);
    read_bool(j, "ESP_Skeleton", s.esp.skeleton);
    read_bool(j, "ESP_Health", s.esp.health);
    read_bool(j, "ESP_Name", s.esp.name);
    read_bool(j, "ESP_Distance", s.esp.distance);
    read_bool(j, "ESP_TeamID", s.esp.team_id);
    read_bool(j, "ESP_Alert", s.esp.alert_360);
    read_bool(j, "ESP_Grenade", s.esp.grenade_warn);
    read_bool(j, "ESP_Vehicle", s.esp.vehicles);
    read_float(j, "ESP_Meter", s.esp.max_distance);
    read_bool(j, "ESP_SmallCross", s.esp.small_crosshair);
    read_bool(j, "ESP_FPSUnlock", s.esp.fps_unlock);
    read_bool(j, "ESP_iPadView", s.esp.ipad_view);
    read_bool(j, "ESP_ShowFPS", s.esp.show_fps);
    read_int(j, "ESP_View", s.esp.view);
    read_float(j, "ESP_ViewWidth", s.esp.view_width);
    read_float(j, "ESP_CrossSize", s.esp.crosshair_size);

    read_bool(j, "Skin_Enable", s.skin.enable);
    read_bool(j, "Skin_Deadbox", s.skin.deadbox);
    read_bool(j, "Skin_KillMsg", s.skin.kill_msg);
    read_bool(j, "Skin_Lua", s.skin.lua);
    read_bool(j, "Skin_BangJo", s.skin.bangjo);
    read_int(j, "Skin_Outfit", s.skin.outfit);
    read_int(j, "Skin_Bag", s.skin.bag);
    read_int(j, "Skin_Helmet", s.skin.helmet);
    read_int(j, "Skin_Vehicle", s.skin.vehicle);

    read_float(j, "UI_Opacity", s.ui.opacity);
    read_float(j, "UI_IconOpacity", s.ui.icon_opacity);
    read_int(j, "UI_Language", s.ui.language);
    read_bool(j, "UI_MenuOpen", s.ui.menu_open);
}

}  // namespace

bool load_dexo_config(const char* path)
{
    std::ifstream in(path);
    if (!in) {
        return false;
    }
    try {
        json j;
        in >> j;
        from_json(j, g_dexo_app);
    } catch (const std::exception&) {
        return false;
    }
    return true;
}

bool save_dexo_config(const char* path)
{
    const std::string target(path);
    const std::string parent = target.substr(0, target.find_last_of('/'));
    if (!parent.empty()) {
        mkdir(parent.c_str(), 0770);
    }
    std::ofstream out(path, std::ios::trunc);
    if (!out) {
        return false;
    }
    try {
        out << to_json(g_dexo_app).dump(2) << '\n';
    } catch (const std::exception&) {
        return false;
    }
    return out.good();
}

bool clear_dexo_login_data()
{
    bool removed = false;
    const char* files[] = {
        "/sdcard/Dexo/saved_key.txt",
        "/sdcard/Dexo/logininfoFile.json",
        "/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/SaveGames/logininfoFile.json",
    };
    for (const char* file : files) {
        if (unlink(file) == 0) {
            removed = true;
        }
    }
    return removed;
}
