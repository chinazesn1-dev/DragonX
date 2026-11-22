#ifndef RECOVERED_KENTOS_DEXO_GAMEPLAY_H
#define RECOVERED_KENTOS_DEXO_GAMEPLAY_H

#include <map>
#include <string>
#include <vector>

#include "dexo_app.h"

struct DexoVec2 {
    float x = 0.0f;
    float y = 0.0f;
    DexoVec2() = default;
    DexoVec2(float x_value, float y_value) : x(x_value), y(y_value) {}
};

struct DexoVec3 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    DexoVec3() = default;
    DexoVec3(float x_value, float y_value, float z_value)
        : x(x_value), y(y_value), z(z_value) {}
};

/* Row-major 4x4 view-projection matrix, row-vector convention. */
struct DexoMat4 {
    float m[4][4] = {};
};

struct DexoPlayer {
    int id = 0;
    int team = 0;
    bool alive = true;
    bool bot = false;
    bool knocked = false;
    bool visible = true;
    float health = 100.0f;
    float distance = 0.0f;
    std::string name;
    DexoVec3 root;
    DexoVec3 head;
    std::map<std::string, DexoVec3> bones;
};

struct DexoVehicle {
    int type = 0;
    float distance = 0.0f;
    DexoVec3 position;
};

struct DexoGrenade {
    float distance = 0.0f;
    float fuse = 0.0f;
    DexoVec3 position;
};

struct DexoWorld {
    int local_team = 0;
    std::vector<DexoPlayer> players;
    std::vector<DexoVehicle> vehicles;
    std::vector<DexoGrenade> grenades;
};

struct DexoEspBox {
    bool visible = false;
    DexoVec2 top_left;
    DexoVec2 bottom_right;
    DexoVec2 line_start;
    DexoVec2 line_end;
    DexoVec2 head;
    DexoVec2 feet;
    float distance = 0.0f;
    std::string label;
    std::vector<std::pair<DexoVec2, DexoVec2>> bones;
};

/* UE4-style perspective projection with the usual Y flip. */
bool dexo_world_to_screen(const DexoMat4& view_projection, const DexoVec3& world,
                          int screen_width, int screen_height, DexoVec2* out);

/* Abstraction over a matrix projector or the live UE4 ProjectWorldToScreen. */
struct DexoProjector {
    bool (*project)(const DexoVec3& world, int screen_width, int screen_height,
                    DexoVec2* out, void* context) = nullptr;
    void* context = nullptr;
};

/* Port of FUN_001dbdd8: nearest visible enemy head/root centre inside the FOV. */
const DexoPlayer* dexo_select_aim_target(const DexoWorld& world,
                                         const DexoMat4& view_projection,
                                         const DexoAimbotConfig& config,
                                         DexoVec2 crosshair,
                                         int screen_width, int screen_height,
                                         float* out_screen_distance = nullptr);

const DexoPlayer* dexo_select_aim_target_projected(const DexoWorld& world,
                                                   const DexoProjector& projector,
                                                   const DexoAimbotConfig& config,
                                                   DexoVec2 crosshair,
                                                   int screen_width, int screen_height,
                                                   float* out_screen_distance = nullptr);

/* Builds the 2D box, skeleton segments and labels for one player. */
bool dexo_build_player_esp(const DexoPlayer& player, const DexoMat4& view_projection,
                           int screen_width, int screen_height,
                           const DexoEspConfig& config, DexoEspBox* out);

bool dexo_build_player_esp_projected(const DexoPlayer& player,
                                     const DexoProjector& projector,
                                     int screen_width, int screen_height,
                                     const DexoEspConfig& config, DexoEspBox* out);

bool dexo_project_vehicle(const DexoVehicle& vehicle, const DexoMat4& view_projection,
                          int screen_width, int screen_height, DexoVec2* out);

bool dexo_project_grenade(const DexoGrenade& grenade, const DexoMat4& view_projection,
                          int screen_width, int screen_height, DexoVec2* out);

/* Bone pairs used by the original skeleton renderer. */
const std::vector<std::pair<std::string, std::string>>& dexo_skeleton_bones();

#endif
