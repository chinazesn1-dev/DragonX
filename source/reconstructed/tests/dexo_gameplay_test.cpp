#include <cmath>
#include <cstdio>
#include <string>

#include "dexo_gameplay.h"
#include "dexo_lua.h"

static int g_failures = 0;

#define CHECK(condition)                                                        \
    do {                                                                        \
        if (!(condition)) {                                                     \
            std::printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #condition);    \
            ++g_failures;                                                       \
        }                                                                       \
    } while (0)

int main()
{
    DexoMat4 view_projection = {};
    view_projection.m[0][0] = 1.0f;
    view_projection.m[1][1] = 1.0f;
    view_projection.m[2][2] = 1.0f;
    view_projection.m[3][3] = 1.0f;

    DexoVec2 screen;
    CHECK(dexo_world_to_screen(view_projection, DexoVec3(0.0f, 0.0f, 0.0f),
                               1000, 1000, &screen));
    CHECK(std::fabs(screen.x - 500.0f) < 0.01f);
    CHECK(std::fabs(screen.y - 500.0f) < 0.01f);

    DexoWorld world;
    world.local_team = 1;
    const auto add_player = [&world](int id, int team, bool bot, bool knocked,
                                     bool alive, bool visible, DexoVec3 root,
                                     DexoVec3 head) {
        DexoPlayer player;
        player.id = id;
        player.team = team;
        player.bot = bot;
        player.knocked = knocked;
        player.alive = alive;
        player.visible = visible;
        player.distance = 10.0f;
        player.root = root;
        player.head = head;
        player.bones["Root"] = root;
        player.bones["Head"] = head;
        world.players.push_back(player);
    };

    add_player(1, 1, false, false, true, true, DexoVec3(0, -1, 0), DexoVec3(0, 1, 0));
    add_player(2, 2, true, false, true, true, DexoVec3(0, -1, 0), DexoVec3(0, 1, 0));
    add_player(3, 2, false, true, true, true, DexoVec3(0, -1, 0), DexoVec3(0, 1, 0));
    add_player(4, 2, false, false, true, true, DexoVec3(0, -1, 0), DexoVec3(0, 1, 0));
    add_player(5, 2, false, false, true, true, DexoVec3(0.8f, -1, 0), DexoVec3(0.8f, 1, 0));

    DexoAimbotConfig aim;
    aim.fov = 200.0f;
    aim.distance = 100.0f;
    aim.ignore_bots = true;
    aim.ignore_knocked = true;
    aim.visible_check = false;
    float screen_distance = 0.0f;
    const DexoPlayer* target = dexo_select_aim_target(
        world, view_projection, aim, DexoVec2(500.0f, 500.0f), 1000, 1000,
        &screen_distance);
    CHECK(target != nullptr);
    CHECK(target != nullptr && target->id == 4);
    CHECK(screen_distance < 1.0f);

    /* Filters must remove the otherwise closer off-centre target. */
    world.players[4].visible = false;
    aim.visible_check = true;
    target = dexo_select_aim_target(world, view_projection, aim,
                                    DexoVec2(500.0f, 500.0f), 1000, 1000,
                                    &screen_distance);
    CHECK(target != nullptr && target->id == 4);

    DexoPlayer& player = world.players[3];
    player.name = "DEXO";
    player.bones["neck_01"] = DexoVec3(0.0f, 0.7f, 0.0f);
    player.bones["spine_03"] = DexoVec3(0.0f, 0.2f, 0.0f);
    player.bones["pelvis"] = DexoVec3(0.0f, -0.4f, 0.0f);
    player.bones["upperarm_l"] = DexoVec3(-0.4f, 0.5f, 0.0f);
    player.bones["lowerarm_l"] = DexoVec3(-0.6f, 0.2f, 0.0f);
    player.bones["hand_l"] = DexoVec3(-0.7f, 0.0f, 0.0f);

    DexoEspConfig esp;
    esp.skeleton = true;
    esp.name = true;
    esp.distance = true;
    DexoEspBox box;
    CHECK(dexo_build_player_esp(player, view_projection, 1000, 1000, esp, &box));
    CHECK(box.visible);
    CHECK(!box.bones.empty());
    CHECK(!box.label.empty());

    bool has_spine = false;
    for (const auto& pair : dexo_skeleton_bones()) {
        if (pair.first == "spine_03" || pair.second == "spine_03") {
            has_spine = true;
        }
    }
    CHECK(has_spine);

    CHECK(std::string(dexo_lua_resource(DexoSkinSlot::Outfit)) == "lua_outfit_res");
    CHECK(std::string(dexo_lua_resource(DexoSkinSlot::Vehicle)) == "lua_vehicle_res");
    CHECK(dexo_lua_skin_name(DexoSkinSlot::Weapon, 123) == "lua_wskin_123");
    CHECK(std::string(dexo_config_resource(DexoSkinSlot::Bag)) == "bag_res");
    CHECK(std::string(dexo_lua_status(true)) == "Status: LUA INJECTED & RUNNING");
    CHECK(std::string(dexo_lua_status(false)) == "Status: WAITING INJECT (ENTER LOBBY)");

    dexo_lua_request_inject();
    CHECK(dexo_lua_take_injection_request());
    CHECK(!dexo_lua_take_injection_request());

    std::printf("failures=%d\n", g_failures);
    return g_failures == 0 ? 0 : 1;
}
