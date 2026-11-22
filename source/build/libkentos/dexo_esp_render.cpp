#include "dexo_esp_render.h"

#include <algorithm>

#include "imgui.h"

namespace {

const ImU32 kEnemyColor = IM_COL32(255, 82, 82, 235);
const ImU32 kVisibleColor = IM_COL32(70, 255, 120, 235);
const ImU32 kSkeletonColor = IM_COL32(240, 240, 240, 220);
const ImU32 kVehicleColor = IM_COL32(80, 180, 255, 235);
const ImU32 kGrenadeColor = IM_COL32(255, 170, 30, 240);
const ImU32 kShadowColor = IM_COL32(0, 0, 0, 180);

void draw_label(ImDrawList* draw, ImVec2 position, ImU32 color, const char* text)
{
    if (text == nullptr || text[0] == '\0') {
        return;
    }
    draw->AddText(ImVec2(position.x + 1.0f, position.y + 1.0f), kShadowColor, text);
    draw->AddText(position, color, text);
}

void draw_player(ImDrawList* draw, const DexoPlayer& player, const DexoEspBox& box,
                 const DexoEspConfig& esp)
{
    const ImU32 color = player.visible ? kVisibleColor : kEnemyColor;
    if (esp.box) {
        draw->AddRect(ImVec2(box.top_left.x, box.top_left.y),
                      ImVec2(box.bottom_right.x, box.bottom_right.y),
                      color, 0.0f, 0, 1.4f);
    }
    if (esp.line) {
        draw->AddLine(ImVec2(box.line_start.x, box.line_start.y),
                      ImVec2(box.line_end.x, box.line_end.y), color, 1.0f);
    }
    if (esp.skeleton) {
        for (const auto& segment : box.bones) {
            draw->AddLine(ImVec2(segment.first.x, segment.first.y),
                          ImVec2(segment.second.x, segment.second.y),
                          kSkeletonColor, 1.3f);
        }
    }
    if (esp.health) {
        const float bar_x = box.top_left.x - 6.0f;
        const float height = std::max(box.bottom_right.y - box.top_left.y, 4.0f);
        draw->AddRectFilled(ImVec2(bar_x, box.top_left.y),
                            ImVec2(bar_x + 3.0f, box.bottom_right.y), kShadowColor);
        const float fraction = std::min(std::max(player.health / 100.0f, 0.0f), 1.0f);
        const float filled = height * fraction;
        draw->AddRectFilled(ImVec2(bar_x, box.bottom_right.y - filled),
                            ImVec2(bar_x + 3.0f, box.bottom_right.y),
                            IM_COL32(80, 220, 90, 235));
    }
    if ((esp.name || esp.distance) && !box.label.empty()) {
        draw_label(draw, ImVec2(box.top_left.x, box.top_left.y - 15.0f),
                   IM_COL32(235, 235, 235, 235), box.label.c_str());
    }
}

}  // namespace

void dexo_render_esp(ImDrawList* draw, const DexoWorld& world,
                     const DexoEspConfig& esp, const DexoAimbotConfig& aim,
                     const DexoProjector& projector,
                     int screen_width, int screen_height)
{
    if (draw == nullptr || screen_width <= 0 || screen_height <= 0) {
        return;
    }
    const ImVec2 center(screen_width * 0.5f, screen_height * 0.5f);

    if (aim.show_fov && aim.fov > 0.0f) {
        draw->AddCircle(center, aim.fov * 0.5f, IM_COL32(255, 255, 255, 90), 64, 1.2f);
    }

    if (esp.small_crosshair) {
        draw->AddLine(ImVec2(center.x - 5.0f, center.y),
                      ImVec2(center.x + 5.0f, center.y), IM_COL32(255, 255, 255, 200), 1.0f);
        draw->AddLine(ImVec2(center.x, center.y - 5.0f),
                      ImVec2(center.x, center.y + 5.0f), IM_COL32(255, 255, 255, 200), 1.0f);
    }

    if (esp.enable) {
        for (const DexoPlayer& player : world.players) {
            DexoEspBox box;
            if (!dexo_build_player_esp_projected(player, projector, screen_width,
                                                 screen_height, esp, &box)) {
                continue;
            }
            draw_player(draw, player, box, esp);
        }
    }

    if (esp.vehicles) {
        for (const DexoVehicle& vehicle : world.vehicles) {
            DexoVec2 screen;
            if (!projector.project(vehicle.position, screen_width, screen_height,
                                   &screen, projector.context)) {
                continue;
            }
            draw->AddCircle(ImVec2(screen.x, screen.y), 5.0f, kVehicleColor, 12, 1.4f);
            draw_label(draw, ImVec2(screen.x + 8.0f, screen.y - 6.0f),
                       kVehicleColor, "Vehicle");
        }
    }

    if (esp.grenade_warn) {
        for (const DexoGrenade& grenade : world.grenades) {
            DexoVec2 screen;
            if (!projector.project(grenade.position, screen_width, screen_height,
                                   &screen, projector.context)) {
                continue;
            }
            draw->AddCircle(ImVec2(screen.x, screen.y), 7.0f, kGrenadeColor, 12, 1.6f);
            draw_label(draw, ImVec2(screen.x + 9.0f, screen.y - 6.0f),
                       kGrenadeColor, "GRENADE");
        }
    }
}
