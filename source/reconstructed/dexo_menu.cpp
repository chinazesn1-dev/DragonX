#include "dexo_menu.h"

#include <cstdio>

#include "imgui.h"

namespace {

const char* const kTargets[] = {"Head", "Neck", "Chest"};
const char* const kModes[] = {"Aim", "Tap", "Hold"};
const char* const kViews[] = {"Default", "iPad", "Tablet", "Wide"};
const char* const kLanguages[] = {"English", "Russian", "Chinese", "Arabic"};

void aim_tab(DexoAppState& s)
{
    ImGui::Checkbox("Enable Aimbot", &s.aim.enable);
    ImGui::Checkbox("Ignore Knocked", &s.aim.ignore_knocked);
    ImGui::Checkbox("Ignore Bots", &s.aim.ignore_bots);
    ImGui::Checkbox("Visible Check", &s.aim.visible_check);
    ImGui::Separator();
    ImGui::TextUnformatted("BULLET TRACK");
    ImGui::Checkbox("Bullet Track", &s.aim.bullet_track);
    ImGui::Checkbox("Ignore Knocked BT", &s.aim.ignore_knocked_bt);
    ImGui::Checkbox("Visible Check BT", &s.aim.visible_check_bt);
    ImGui::Separator();
    ImGui::TextUnformatted("AIM SETTINGS");
    ImGui::Checkbox("Show FOV", &s.aim.show_fov);
    ImGui::SliderFloat("FOV", &s.aim.fov, 10.0f, 300.0f, "%.0f");
    ImGui::Combo("mode", &s.aim.mode, kModes, IM_ARRAYSIZE(kModes));
    ImGui::Combo("target", &s.aim.target, kTargets, IM_ARRAYSIZE(kTargets));
    ImGui::SliderFloat("Smooth", &s.aim.smooth, 1.0f, 20.0f, "%.2f");
    ImGui::SliderFloat("Aim Distance", &s.aim.distance, 0.0f, 500.0f, "%.0f m");
    ImGui::Checkbox("Recoil Control", &s.aim.recoil_control);
}

void esp_tab(DexoAppState& s)
{
    ImGui::Checkbox("Enable ESP", &s.esp.enable);
    ImGui::Checkbox("Show Bots", &s.esp.show_bots);
    ImGui::Separator();
    ImGui::TextUnformatted("PLAYER ESP");
    ImGui::Checkbox("Line", &s.esp.line);
    ImGui::Checkbox("Box", &s.esp.box);
    ImGui::Checkbox("Skeleton", &s.esp.skeleton);
    ImGui::Checkbox("Health", &s.esp.health);
    ImGui::Checkbox("Name", &s.esp.name);
    ImGui::Checkbox("Distance", &s.esp.distance);
    ImGui::Checkbox("Team ID", &s.esp.team_id);
    ImGui::Checkbox("Alert 360", &s.esp.alert_360);
    ImGui::Checkbox("Grenade Warn", &s.esp.grenade_warn);
    ImGui::SliderFloat("ESP Distance", &s.esp.max_distance, 0.0f, 1000.0f, "%.0f m");
    ImGui::Separator();
    ImGui::TextUnformatted("ITEMS");
    ImGui::Checkbox("Vehicles", &s.esp.vehicles);
    ImGui::Checkbox("Small Crosshair", &s.esp.small_crosshair);
    ImGui::Checkbox("165 FPS Unlock", &s.esp.fps_unlock);
}

void settings_tab(DexoAppState& s)
{
    ImGui::Checkbox("iPad View", &s.esp.ipad_view);
    ImGui::Combo("view", &s.esp.view, kViews, IM_ARRAYSIZE(kViews));
    ImGui::SliderFloat("View Width", &s.esp.view_width, 0.0f, 2.0f, "%.2f");
    ImGui::SliderFloat("Crosshair Size", &s.esp.crosshair_size, 0.0f, 5.0f, "%.2f");
    ImGui::Checkbox("Show FPS", &s.esp.show_fps);
    ImGui::Separator();
    ImGui::TextUnformatted("APPEARANCE");
    ImGui::SliderFloat("Menu Opacity", &s.ui.opacity, 0.2f, 1.0f, "%.2f");
    ImGui::SliderFloat("Icon Opacity", &s.ui.icon_opacity, 0.2f, 1.0f, "%.2f");
    ImGui::Combo("Language", &s.ui.language, kLanguages, IM_ARRAYSIZE(kLanguages));
    if (ImGui::Button("Save Config Now", ImVec2(-1.0f, 0.0f))) {
        save_dexo_config();
        s.status = "Config Saved Successfully!";
    }
}

void skin_tab(DexoAppState& s)
{
    ImGui::Checkbox("Skin_Enable", &s.skin.enable);
    ImGui::Checkbox("Deadbox", &s.skin.deadbox);
    ImGui::Checkbox("Kill Message", &s.skin.kill_msg);
    ImGui::Checkbox("Lua Skin", &s.skin.lua);
    ImGui::Checkbox("BangJo", &s.skin.bangjo);
    ImGui::Separator();
    ImGui::TextUnformatted("LUA SKIN HACK (KENTOS)");
    ImGui::SliderInt("Outfit", &s.skin.outfit, 0, 1000);
    ImGui::SliderInt("Bag", &s.skin.bag, 0, 1000);
    ImGui::SliderInt("Helmet", &s.skin.helmet, 0, 1000);
    ImGui::SliderInt("Vehicle", &s.skin.vehicle, 0, 1000);
    ImGui::TextUnformatted(s.lua_injected
        ? "Status: LUA INJECTED & RUNNING"
        : "Status: WAITING INJECT (ENTER LOBBY)");
    ImGui::TextUnformatted("KENTOS skin system: ON (auto).");
    if (ImGui::Button("Force Inject Lua Now", ImVec2(-1.0f, 0.0f))) {
        if (g_dexo_force_lua_inject != nullptr) {
            g_dexo_force_lua_inject();
        }
        s.lua_injected = true;
        s.status = "Lua Inject Triggered!";
    }
}

void account_tab(DexoAppState& s)
{
    ImGui::TextUnformatted("ACCOUNT");
    ImGui::TextWrapped("Login and online key activation are disabled in this build.");
    ImGui::Separator();
    if (ImGui::Button("Login Clear", ImVec2(-1.0f, 0.0f))) {
        clear_dexo_login_data();
        s.status = "Success : Login Data Cleared!";
    }
}

void about_tab(DexoAppState& s)
{
    ImGui::TextUnformatted("DEXO / KENTOS");
    ImGui::TextWrapped("Reconstructed source build. Menu, configuration and EGL hook "
                       "are compiled from the recovered sources.");
    ImGui::Separator();
    ImGui::Text("Status: %s", s.status.c_str());
}

}  // namespace

void draw_dexo_menu(DexoAppState& state)
{
    if (!state.ui.menu_open) {
        return;
    }
    const ImGuiIO& io = ImGui::GetIO();
    ImGui::SetNextWindowSize(ImVec2(520.0f, 420.0f), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowPos(ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f),
                            ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowBgAlpha(state.ui.opacity);
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoCollapse;
    if (!ImGui::Begin("DEXO", &state.ui.menu_open, flags)) {
        ImGui::End();
        return;
    }
    if (ImGui::BeginTabBar("##dexo_tabs")) {
        if (ImGui::BeginTabItem("AIM")) {
            aim_tab(state);
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("ESP")) {
            esp_tab(state);
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("SETTINGS")) {
            settings_tab(state);
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("SKIN")) {
            skin_tab(state);
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("ACCOUNT")) {
            account_tab(state);
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("ABOUT")) {
            about_tab(state);
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }
    ImGui::End();
}

void draw_dexo_logo_button(DexoAppState& state)
{
    if (state.ui.menu_open) {
        return;
    }
    ImGui::SetNextWindowPos(ImVec2(24.0f, 80.0f), ImGuiCond_Always);
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration |
                                   ImGuiWindowFlags_AlwaysAutoResize |
                                   ImGuiWindowFlags_NoBackground;
    ImGui::Begin("##LogoBtn", nullptr, flags);
    if (ImGui::Button("DEXO", ImVec2(72.0f, 32.0f))) {
        state.ui.menu_open = true;
    }
    ImGui::End();
}
