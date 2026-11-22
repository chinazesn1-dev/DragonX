#if defined(_MSC_VER)
#define DEXO_PUBLIC
#else
#define DEXO_PUBLIC __attribute__((visibility("default")))
#endif

#include "dexo_gameplay.h"

#include <algorithm>
#include <cmath>
#include <cfloat>
#include <cstdio>

namespace {

float screen_distance(DexoVec2 a, DexoVec2 b)
{
    const float dx = a.x - b.x;
    const float dy = a.y - b.y;
    return std::sqrt(dx * dx + dy * dy);
}

DexoVec2 midpoint(DexoVec2 a, DexoVec2 b)
{
    return DexoVec2{(a.x + b.x) * 0.5f, (a.y + b.y) * 0.5f};
}

}  // namespace

bool dexo_world_to_screen(const DexoMat4& view_projection, const DexoVec3& world,
                          int screen_width, int screen_height, DexoVec2* out)
{
    if (out == nullptr || screen_width <= 0 || screen_height <= 0) {
        return false;
    }
    const float clip_x = world.x * view_projection.m[0][0] +
                         world.y * view_projection.m[1][0] +
                         world.z * view_projection.m[2][0] +
                         view_projection.m[3][0];
    const float clip_y = world.x * view_projection.m[0][1] +
                         world.y * view_projection.m[1][1] +
                         world.z * view_projection.m[2][1] +
                         view_projection.m[3][1];
    const float clip_w = world.x * view_projection.m[0][3] +
                         world.y * view_projection.m[1][3] +
                         world.z * view_projection.m[2][3] +
                         view_projection.m[3][3];
    if (clip_w <= 0.0001f) {
        return false;
    }
    const float ndc_x = clip_x / clip_w;
    const float ndc_y = clip_y / clip_w;
    const float x = (ndc_x * 0.5f + 0.5f) * static_cast<float>(screen_width);
    const float y = (1.0f - (ndc_y * 0.5f + 0.5f)) * static_cast<float>(screen_height);
    const float margin_x = static_cast<float>(screen_width) * 0.25f;
    const float margin_y = static_cast<float>(screen_height) * 0.25f;
    if (x < -margin_x || x > screen_width + margin_x ||
        y < -margin_y || y > screen_height + margin_y) {
        return false;
    }
    out->x = x;
    out->y = y;
    return true;
}

namespace {

bool matrix_project(const DexoVec3& world, int screen_width, int screen_height,
                    DexoVec2* out, void* context)
{
    return dexo_world_to_screen(*static_cast<const DexoMat4*>(context), world,
                                screen_width, screen_height, out);
}

bool project_point(const DexoProjector& projector, const DexoVec3& world,
                   int screen_width, int screen_height, DexoVec2* out)
{
    return projector.project != nullptr &&
           projector.project(world, screen_width, screen_height, out, projector.context);
}

}  // namespace

const DexoPlayer* dexo_select_aim_target_projected(const DexoWorld& world,
                                                   const DexoProjector& projector,
                                                   const DexoAimbotConfig& config,
                                                   DexoVec2 crosshair,
                                                   int screen_width, int screen_height,
                                                   float* out_screen_distance)
{
    const DexoPlayer* best = nullptr;
    float best_distance = FLT_MAX;
    const float fov_radius = config.fov > 0.0f ? config.fov * 0.5f : 0.0f;

    for (const DexoPlayer& player : world.players) {
        if (!player.alive) {
            continue;
        }
        if (player.team == world.local_team) {
            continue;
        }
        if (config.ignore_knocked && player.knocked) {
            continue;
        }
        if (config.ignore_bots && player.bot) {
            continue;
        }
        if (config.visible_check && !player.visible) {
            continue;
        }
        if (config.distance > 0.0f && player.distance > config.distance) {
            continue;
        }

        DexoVec3 root = player.bones.count("Root") != 0 ? player.bones.at("Root") : player.root;
        DexoVec3 head = player.bones.count("Head") != 0 ? player.bones.at("Head") : player.head;
        DexoVec2 root_screen;
        DexoVec2 head_screen;
        if (!project_point(projector, root, screen_width, screen_height, &root_screen) ||
            !project_point(projector, head, screen_width, screen_height, &head_screen)) {
            continue;
        }
        const DexoVec2 center = midpoint(root_screen, head_screen);
        const float distance = screen_distance(center, crosshair);
        if (fov_radius > 0.0f && distance > fov_radius) {
            continue;
        }
        if (distance < best_distance) {
            best_distance = distance;
            best = &player;
        }
    }
    if (out_screen_distance != nullptr) {
        *out_screen_distance = best_distance;
    }
    return best;
}

const DexoPlayer* dexo_select_aim_target(const DexoWorld& world,
                                         const DexoMat4& view_projection,
                                         const DexoAimbotConfig& config,
                                         DexoVec2 crosshair,
                                         int screen_width, int screen_height,
                                         float* out_screen_distance)
{
    DexoProjector projector;
    projector.project = &matrix_project;
    projector.context = const_cast<DexoMat4*>(&view_projection);
    return dexo_select_aim_target_projected(world, projector, config, crosshair,
                                            screen_width, screen_height,
                                            out_screen_distance);
}

bool dexo_build_player_esp_projected(const DexoPlayer& player,
                                     const DexoProjector& projector,
                                     int screen_width, int screen_height,
                                     const DexoEspConfig& config, DexoEspBox* out)
{
    if (out == nullptr) {
        return false;
    }
    *out = DexoEspBox{};
    DexoVec2 root_screen;
    DexoVec2 head_screen;
    if (!project_point(projector, player.root, screen_width, screen_height, &root_screen)) {
        return false;
    }
    if (!project_point(projector, player.head, screen_width, screen_height, &head_screen)) {
        return false;
    }

    float top = std::min(root_screen.y, head_screen.y);
    float bottom = std::max(root_screen.y, head_screen.y);
    float height = bottom - top;
    if (height < 2.0f) {
        height = 48.0f;
        bottom = top + height;
    }
    float width = height * 0.45f;
    if (width < 8.0f) {
        width = 8.0f;
    }
    const float center_x = (root_screen.x + head_screen.x) * 0.5f;

    out->visible = true;
    out->top_left = DexoVec2{center_x - width * 0.5f, top};
    out->bottom_right = DexoVec2{center_x + width * 0.5f, bottom};
    out->line_start = DexoVec2{static_cast<float>(screen_width) * 0.5f,
                               static_cast<float>(screen_height)};
    out->line_end = DexoVec2{center_x, bottom};
    out->head = head_screen;
    out->feet = root_screen;
    out->distance = player.distance;
    if (config.name && !player.name.empty()) {
        out->label = player.name;
    }
    if (config.distance) {
        char buffer[64];
        std::snprintf(buffer, sizeof(buffer), "%.0fm", player.distance);
        if (!out->label.empty()) {
            out->label += "  ";
        }
        out->label += buffer;
    }

    if (config.skeleton) {
        for (const auto& pair : dexo_skeleton_bones()) {
            auto first = player.bones.find(pair.first);
            auto second = player.bones.find(pair.second);
            if (first == player.bones.end() || second == player.bones.end()) {
                continue;
            }
            DexoVec2 a;
            DexoVec2 b;
            if (project_point(projector, first->second, screen_width, screen_height, &a) &&
                project_point(projector, second->second, screen_width, screen_height, &b)) {
                out->bones.emplace_back(a, b);
            }
        }
    }
    return true;
}

bool dexo_build_player_esp(const DexoPlayer& player, const DexoMat4& view_projection,
                           int screen_width, int screen_height,
                           const DexoEspConfig& config, DexoEspBox* out)
{
    DexoProjector projector;
    projector.project = &matrix_project;
    projector.context = const_cast<DexoMat4*>(&view_projection);
    return dexo_build_player_esp_projected(player, projector, screen_width, screen_height,
                                           config, out);
}

bool dexo_project_vehicle(const DexoVehicle& vehicle, const DexoMat4& view_projection,
                          int screen_width, int screen_height, DexoVec2* out)
{
    return dexo_world_to_screen(view_projection, vehicle.position,
                                screen_width, screen_height, out);
}

bool dexo_project_grenade(const DexoGrenade& grenade, const DexoMat4& view_projection,
                          int screen_width, int screen_height, DexoVec2* out)
{
    return dexo_world_to_screen(view_projection, grenade.position,
                                screen_width, screen_height, out);
}

const std::vector<std::pair<std::string, std::string>>& dexo_skeleton_bones()
{
    static const std::vector<std::pair<std::string, std::string>> bones = {
        {"Head", "neck_01"},
        {"neck_01", "spine_03"},
        {"spine_03", "pelvis"},
        {"spine_03", "upperarm_l"},
        {"upperarm_l", "lowerarm_l"},
        {"lowerarm_l", "hand_l"},
        {"spine_03", "upperarm_r"},
        {"upperarm_r", "lowerarm_r"},
        {"lowerarm_r", "hand_r"},
        {"pelvis", "thigh_l"},
        {"thigh_l", "calf_l"},
        {"calf_l", "foot_l"},
        {"pelvis", "thigh_r"},
        {"thigh_r", "calf_r"},
        {"calf_r", "foot_r"},
    };
    return bones;
}

extern "C" DEXO_PUBLIC
const DexoPlayer* dexo_gameplay_select_target(const DexoWorld* world,
                                              const DexoMat4* view_projection,
                                              const DexoAimbotConfig* config,
                                              float crosshair_x, float crosshair_y,
                                              int screen_width, int screen_height,
                                              float* out_screen_distance)
{
    if (world == nullptr || view_projection == nullptr || config == nullptr) {
        return nullptr;
    }
    return dexo_select_aim_target(*world, *view_projection, *config,
                                  DexoVec2{crosshair_x, crosshair_y},
                                  screen_width, screen_height, out_screen_distance);
}

extern "C" DEXO_PUBLIC
const void* dexo_gameplay_anchor()
{
    static const void* const keep[] = {
        reinterpret_cast<const void*>(&dexo_select_aim_target),
        reinterpret_cast<const void*>(&dexo_build_player_esp),
        reinterpret_cast<const void*>(&dexo_project_vehicle),
        reinterpret_cast<const void*>(&dexo_project_grenade),
    };
    return keep;
}

