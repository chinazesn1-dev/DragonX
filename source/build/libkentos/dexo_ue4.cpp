#include "dexo_ue4.h"

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <string>
#include <unordered_map>
#include <vector>

#if defined(_MSC_VER)
#define DEXO_PUBLIC
#else
#define DEXO_PUBLIC __attribute__((visibility("default")))
#endif

namespace {

constexpr uintptr_t kGObjectsOffset = 0x0f9ae670;
constexpr uintptr_t kNamePoolOffset = 0x0901bed0;
constexpr uintptr_t kEntityListOffset = 0x0ade5abc;
constexpr size_t kProcessEventOffset = 0x260;
constexpr uint32_t kInvalidFName = 0xffffffffu;

uintptr_t g_base = 0;
void* g_name_pool = nullptr;
bool g_ready = false;

void* g_controller = nullptr;
void* g_local_player = nullptr;
void* g_gameplay_statics = nullptr;

void* g_project_function = nullptr;
void* g_bone_function = nullptr;
void* g_distance_function = nullptr;
void* g_los_function = nullptr;
void* g_location_function = nullptr;
void* g_lookat_function = nullptr;
void* g_math_library = nullptr;
void* g_yaw_function = nullptr;
void* g_pitch_function = nullptr;
void* g_rotation_function = nullptr;
void* g_change_avatar_function = nullptr;
void* g_delay_avatar_function = nullptr;

std::unordered_map<std::string, void*> g_object_cache;
std::unordered_map<std::string, uint32_t> g_fname_cache;

template <typename T>
T read_value(void* address, size_t offset)
{
    T value = T{};
    std::memcpy(&value, static_cast<uint8_t*>(address) + offset, sizeof(T));
    return value;
}

void* read_pointer(void* address, size_t offset)
{
    return read_value<void*>(address, offset);
}

int32_t read_int32(void* address, size_t offset)
{
    return read_value<int32_t>(address, offset);
}

uint32_t read_uint32(void* address, size_t offset)
{
    return read_value<uint32_t>(address, offset);
}

uint8_t read_uint8(void* address, size_t offset)
{
    return read_value<uint8_t>(address, offset);
}

float read_float(void* address, size_t offset)
{
    return read_value<float>(address, offset);
}

struct GObjects {
    uint8_t pad0[0x10];
    uint8_t* items;
    uint8_t pad1[8];
    int32_t count;
};

struct TArray {
    void** data;
    int32_t count;
    int32_t max;
};

GObjects* gobjects()
{
    return reinterpret_cast<GObjects*>(g_base + kGObjectsOffset);
}

std::string fname_string(uint32_t index)
{
    if (g_name_pool == nullptr) {
        return "None";
    }
    const int32_t count = read_int32(g_name_pool, 0x400);
    if (static_cast<int32_t>(index) < 0 || static_cast<int32_t>(index) >= count) {
        return "None";
    }
    void* block = *reinterpret_cast<void**>(
        static_cast<uint8_t*>(g_name_pool) + (index >> 14) * sizeof(void*));
    if (block == nullptr) {
        return "None";
    }
    void* entry = *reinterpret_cast<void**>(
        static_cast<uint8_t*>(block) + (index & 0x3fff) * sizeof(void*));
    if (entry == nullptr) {
        return "None";
    }
    const char* name = static_cast<const char*>(entry) + 0xc;
    return std::string(name);
}

uint32_t find_fname_index(const char* name)
{
    if (name == nullptr || g_name_pool == nullptr) {
        return kInvalidFName;
    }
    auto cached = g_fname_cache.find(name);
    if (cached != g_fname_cache.end()) {
        return cached->second;
    }
    const int32_t count = read_int32(g_name_pool, 0x400);
    if (count <= 0) {
        return kInvalidFName;
    }
    for (uint32_t index = 0; index < static_cast<uint32_t>(count); ++index) {
        void* block = *reinterpret_cast<void**>(
            static_cast<uint8_t*>(g_name_pool) + (index >> 14) * sizeof(void*));
        if (block == nullptr) {
            continue;
        }
        void* entry = *reinterpret_cast<void**>(
            static_cast<uint8_t*>(block) + (index & 0x3fff) * sizeof(void*));
        if (entry == nullptr) {
            continue;
        }
        const char* candidate = static_cast<const char*>(entry) + 0xc;
        if (std::strcmp(candidate, name) == 0) {
            g_fname_cache[name] = index;
            return index;
        }
    }
    return kInvalidFName;
}

std::string object_name(void* object)
{
    if (object == nullptr) {
        return {};
    }
    const uint32_t index = read_uint32(object, 0x18);
    const int32_t number = read_int32(object, 0x1c);
    std::string name = fname_string(index);
    if (number > 0) {
        name += "_" + std::to_string(number);
    }
    const size_t slash = name.rfind('/');
    if (slash != std::string::npos) {
        name = name.substr(slash + 1);
    }
    return name;
}

std::string object_full_name(void* object)
{
    if (object == nullptr) {
        return {};
    }
    void* cls = read_pointer(object, 0x10);
    if (cls == nullptr) {
        return {};
    }
    std::string full = object_name(cls);
    full += ' ';
    std::vector<std::string> outers;
    for (void* outer = read_pointer(object, 0x20); outer != nullptr;
         outer = read_pointer(outer, 0x20)) {
        outers.push_back(object_name(outer));
    }
    std::reverse(outers.begin(), outers.end());
    for (const std::string& outer : outers) {
        full += outer;
        full += '.';
    }
    full += object_name(object);
    return full;
}

bool is_a(void* object, void* cls)
{
    if (object == nullptr || cls == nullptr) {
        return false;
    }
    void* current = read_pointer(object, 0x10);
    for (int depth = 0; current != nullptr && depth < 64; ++depth) {
        if (current == cls) {
            return true;
        }
        current = read_pointer(current, 0x30);
    }
    return false;
}

void process_event(void* object, void* function, void* params)
{
    if (object == nullptr || function == nullptr) {
        return;
    }
    void** vtable = *reinterpret_cast<void***>(object);
    if (vtable == nullptr) {
        return;
    }
    using ProcessEventFn = void (*)(void*, void*, void*);
    auto call = reinterpret_cast<ProcessEventFn>(
        vtable[kProcessEventOffset / sizeof(void*)]);
    if (call != nullptr) {
        call(object, function, params);
    }
}

void* find_object_uncached(const char* full_name)
{
    GObjects* objects = gobjects();
    if (objects == nullptr || objects->items == nullptr || objects->count <= 0) {
        return nullptr;
    }
    for (int32_t i = 0; i < objects->count; ++i) {
        void* candidate = *reinterpret_cast<void**>(objects->items + i * 0x18);
        if (candidate != nullptr && object_full_name(candidate) == full_name) {
            return candidate;
        }
    }
    return nullptr;
}

void ensure_runtime_objects()
{
    if (g_controller == nullptr) {
        void* player_controller_class = find_object_uncached("Class Engine.PlayerController");
        if (player_controller_class != nullptr) {
            GObjects* objects = gobjects();
            for (int32_t i = 0; objects != nullptr && i < objects->count; ++i) {
                void* candidate = *reinterpret_cast<void**>(objects->items + i * 0x18);
                if (candidate == nullptr || !is_a(candidate, player_controller_class)) {
                    continue;
                }
                void* state = read_pointer(candidate, 0x810);
                if (state == nullptr) {
                    continue;
                }
                void* pawn = read_pointer(state, 0x78);
                if (pawn != nullptr) {
                    g_controller = candidate;
                    g_local_player = pawn;
                    break;
                }
            }
        }
    }
    if (g_project_function == nullptr) {
        g_project_function = find_object_uncached(
            "Function Engine.GameplayStatics.ProjectWorldToScreen");
        void* gameplay_class = find_object_uncached("Class Engine.GameplayStatics");
        if (gameplay_class != nullptr) {
            GObjects* objects = gobjects();
            for (int32_t i = 0; objects != nullptr && i < objects->count; ++i) {
                void* candidate = *reinterpret_cast<void**>(objects->items + i * 0x18);
                if (candidate != nullptr && is_a(candidate, gameplay_class) &&
                    object_name(candidate).find("Default__") != std::string::npos) {
                    g_gameplay_statics = candidate;
                    break;
                }
            }
        }
    }
    if (g_bone_function == nullptr) {
        g_bone_function = find_object_uncached(
            "Function ShadowTrackerExtra.STExtraPlayerCharacter.GetBoneLocation");
    }
    if (g_distance_function == nullptr) {
        g_distance_function = find_object_uncached("Function Engine.Actor.GetDistanceTo");
    }
    if (g_los_function == nullptr) {
        g_los_function = find_object_uncached("Function Engine.Controller.LineOfSightTo");
    }
    if (g_location_function == nullptr) {
        g_location_function = find_object_uncached(
            "Function Engine.Actor.K2_GetActorLocation");
    }
}

bool get_bone_position(void* actor, const char* bone, DexoVec3* out)
{
    if (g_bone_function == nullptr || actor == nullptr || out == nullptr) {
        return false;
    }
    const uint32_t index = find_fname_index(bone);
    if (index == kInvalidFName) {
        return false;
    }
    struct BoneParams {
        uint64_t bone;
        float x;
        float y;
        float z;
        uint32_t pad;
    } params = {};
    params.bone = index;
    process_event(actor, g_bone_function, &params);
    out->x = params.x;
    out->y = params.y;
    out->z = params.z;
    return params.x != 0.0f || params.y != 0.0f || params.z != 0.0f;
}

float get_distance_to(void* actor, void* other)
{
    if (g_distance_function == nullptr || actor == nullptr || other == nullptr) {
        return 0.0f;
    }
    struct DistanceParams {
        void* other;
        float value;
        uint32_t pad;
    } params = {};
    params.other = other;
    process_event(actor, g_distance_function, &params);
    return params.value;
}

bool line_of_sight(void* controller, void* actor)
{
    if (g_los_function == nullptr || controller == nullptr || actor == nullptr) {
        return true;
    }
    struct LosParams {
        void* other;
        float x;
        float y;
        float z;
        uint8_t alternate;
        uint8_t result;
        uint8_t pad[2];
    } params = {};
    params.other = actor;
    process_event(controller, g_los_function, &params);
    return params.result != 0;
}

bool get_actor_location(void* actor, DexoVec3* out)
{
    if (g_location_function == nullptr || actor == nullptr || out == nullptr) {
        return false;
    }
    struct LocationParams {
        float x;
        float y;
        float z;
        uint32_t pad;
    } params = {};
    process_event(actor, g_location_function, &params);
    out->x = params.x;
    out->y = params.y;
    out->z = params.z;
    return true;
}

std::vector<void*> entity_actors()
{
    std::vector<void*> actors;
    if (g_base == 0) {
        return actors;
    }
    using EntityListFn = TArray* (*)();
    auto list_function = reinterpret_cast<EntityListFn>(g_base + kEntityListOffset);
    TArray* list = list_function();
    if (list == nullptr || list->data == nullptr || list->count <= 0) {
        return actors;
    }
    const int32_t count = std::min(list->count, 4096);
    for (int32_t i = 0; i < count; ++i) {
        if (void* actor = list->data[i]) {
            actors.push_back(actor);
        }
    }
    return actors;
}

void collect_class_actors(void* cls, std::vector<void*>* out)
{
    if (cls == nullptr || out == nullptr) {
        return;
    }
    GObjects* objects = gobjects();
    if (objects == nullptr || objects->items == nullptr) {
        return;
    }
    for (int32_t i = 0; i < objects->count; ++i) {
        void* candidate = *reinterpret_cast<void**>(objects->items + i * 0x18);
        if (candidate != nullptr && is_a(candidate, cls)) {
            out->push_back(candidate);
        }
    }
}

}  // namespace

bool dexo_ue4_init(uintptr_t libue4_base)
{
    g_base = libue4_base;
    g_ready = false;
    g_object_cache.clear();
    g_fname_cache.clear();
    g_controller = nullptr;
    g_local_player = nullptr;
    g_gameplay_statics = nullptr;
    g_project_function = nullptr;
    g_bone_function = nullptr;
    g_distance_function = nullptr;
    g_los_function = nullptr;
    g_location_function = nullptr;
    g_lookat_function = nullptr;
    g_math_library = nullptr;
    g_yaw_function = nullptr;
    g_pitch_function = nullptr;
    g_rotation_function = nullptr;
    g_change_avatar_function = nullptr;
    g_delay_avatar_function = nullptr;
    if (g_base == 0) {
        return false;
    }
    using NamePoolFn = void* (*)();
    auto name_pool_function = reinterpret_cast<NamePoolFn>(g_base + kNamePoolOffset);
    g_name_pool = name_pool_function();
    g_ready = g_name_pool != nullptr;
    return g_ready;
}

bool dexo_ue4_ready()
{
    return g_ready;
}

uintptr_t dexo_ue4_base()
{
    return g_base;
}

void* dexo_ue4_find_object(const char* full_name)
{
    if (!g_ready || full_name == nullptr) {
        return nullptr;
    }
    auto cached = g_object_cache.find(full_name);
    if (cached != g_object_cache.end()) {
        return cached->second;
    }
    void* found = find_object_uncached(full_name);
    if (found != nullptr) {
        g_object_cache[full_name] = found;
    }
    return found;
}

void* dexo_ue4_find_class(const char* full_name)
{
    return dexo_ue4_find_object(full_name);
}

void* dexo_ue4_find_function(const char* full_name)
{
    return dexo_ue4_find_object(full_name);
}

void* dexo_ue4_default_object(void* cls)
{
    if (!g_ready || cls == nullptr) {
        return nullptr;
    }
    GObjects* objects = gobjects();
    for (int32_t i = 0; objects != nullptr && i < objects->count; ++i) {
        void* candidate = *reinterpret_cast<void**>(objects->items + i * 0x18);
        if (candidate != nullptr && is_a(candidate, cls) &&
            object_name(candidate).find("Default__") != std::string::npos) {
            return candidate;
        }
    }
    return nullptr;
}

void* dexo_ue4_class_of(void* object)
{
    return object != nullptr ? read_pointer(object, 0x10) : nullptr;
}

bool dexo_ue4_is_a(void* object, void* cls)
{
    return is_a(object, cls);
}

void dexo_ue4_process_event(void* object, void* function, void* params)
{
    process_event(object, function, params);
}

std::string dexo_ue4_get_name(void* object)
{
    return object_name(object);
}

std::string dexo_ue4_full_name(void* object)
{
    return object_full_name(object);
}

uint32_t dexo_ue4_find_fname(const char* name)
{
    return find_fname_index(name);
}

void* dexo_ue4_local_controller()
{
    ensure_runtime_objects();
    return g_controller;
}

void* dexo_ue4_local_player()
{
    ensure_runtime_objects();
    return g_local_player;
}

bool dexo_ue4_project(const DexoVec3& world, DexoVec2* screen)
{
    if (screen == nullptr || g_controller == nullptr) {
        return false;
    }
    ensure_runtime_objects();
    if (g_project_function == nullptr || g_gameplay_statics == nullptr) {
        return false;
    }
    struct ProjectParams {
        float x;
        float y;
        float z;
        uint32_t pad;
        void* controller;
        uint8_t relative;
        uint8_t pad2[3];
        float screen_x;
        float screen_y;
        uint8_t result;
        uint8_t pad3[3];
    } params = {};
    params.x = world.x;
    params.y = world.y;
    params.z = world.z;
    params.controller = g_controller;
    process_event(g_gameplay_statics, g_project_function, &params);
    screen->x = params.screen_x;
    screen->y = params.screen_y;
    return params.result != 0;
}

bool dexo_ue4_read_bones(void* actor, DexoPlayer* player)
{
    if (actor == nullptr || player == nullptr) {
        return false;
    }
    ensure_runtime_objects();
    bool have_root = get_bone_position(actor, "Root", &player->root);
    bool have_head = get_bone_position(actor, "Head", &player->head);
    player->bones["Root"] = player->root;
    player->bones["Head"] = player->head;
    return have_root || have_head;
}

bool dexo_ue4_read_world(DexoWorld* world, const DexoAimbotConfig& aim,
                         const DexoEspConfig& esp)
{
    if (world == nullptr || !g_ready) {
        return false;
    }
    (void)aim;
    ensure_runtime_objects();
    if (g_local_player == nullptr || g_controller == nullptr) {
        return false;
    }
    if (!esp.enable && !esp.vehicles && !aim.enable) {
        return false;
    }

    world->players.clear();
    world->vehicles.clear();
    world->grenades.clear();
    world->local_team = read_int32(g_local_player, 0x990);
    const int32_t local_member = read_int32(g_local_player, 0x9a8);

    for (void* actor : entity_actors()) {
        if (actor == g_local_player || actor == g_controller) {
            continue;
        }
        if (read_int32(actor, 0x990) == world->local_team) {
            continue;
        }
        if (read_int32(actor, 0x9a8) == local_member) {
            continue;
        }
        if ((read_uint8(actor, 0xe8c) & 1) != 0) {
            continue;
        }

        DexoPlayer player;
        player.team = read_int32(actor, 0x990);
        player.knocked = read_float(actor, 0xe70) != 0.0f;
        player.bot = read_uint8(actor, 0xa69) != 0;
        player.distance = get_distance_to(actor, g_local_player);
        player.name = object_name(actor);
        player.visible = line_of_sight(g_controller, actor);
        if (!dexo_ue4_read_bones(actor, &player)) {
            continue;
        }
        if (esp.skeleton) {
            for (const auto& pair : dexo_skeleton_bones()) {
                if (player.bones.count(pair.first) == 0) {
                    DexoVec3 value;
                    if (get_bone_position(actor, pair.first.c_str(), &value)) {
                        player.bones[pair.first] = value;
                    }
                }
                if (player.bones.count(pair.second) == 0) {
                    DexoVec3 value;
                    if (get_bone_position(actor, pair.second.c_str(), &value)) {
                        player.bones[pair.second] = value;
                    }
                }
            }
        }
        world->players.push_back(player);
    }

    if (esp.vehicles) {
        void* vehicle_class = dexo_ue4_find_class(
            "Class ShadowTrackerExtra.STExtraVehicleBase");
        std::vector<void*> vehicles;
        collect_class_actors(vehicle_class, &vehicles);
        for (void* vehicle : vehicles) {
            DexoVehicle entry;
            if (!get_actor_location(vehicle, &entry.position)) {
                continue;
            }
            entry.distance = get_distance_to(vehicle, g_local_player);
            world->vehicles.push_back(entry);
        }
    }

    if (esp.grenade_warn) {
        void* grenade_class = dexo_ue4_find_class(
            "Class ShadowTrackerExtra.STExtraGrenadeBase");
        std::vector<void*> grenades;
        collect_class_actors(grenade_class, &grenades);
        for (void* grenade : grenades) {
            DexoGrenade entry;
            if (!get_actor_location(grenade, &entry.position)) {
                continue;
            }
            entry.distance = get_distance_to(grenade, g_local_player);
            world->grenades.push_back(entry);
        }
    }
    return true;
}

namespace {

struct DexoRotator {
    float pitch;
    float yaw;
    float roll;
};

float normalize_degrees(float value)
{
    while (value > 180.0f) {
        value -= 360.0f;
    }
    while (value < -180.0f) {
        value += 360.0f;
    }
    return value;
}

bool get_control_rotation(DexoRotator* out)
{
    ensure_runtime_objects();
    if (g_rotation_function == nullptr) {
        g_rotation_function = find_object_uncached(
            "Function Engine.Controller.GetControlRotation");
    }
    if (g_rotation_function == nullptr || g_controller == nullptr || out == nullptr) {
        return false;
    }
    struct RotationParams {
        float pitch;
        float yaw;
        float roll;
    } params = {};
    process_event(g_controller, g_rotation_function, &params);
    out->pitch = params.pitch;
    out->yaw = params.yaw;
    out->roll = params.roll;
    return true;
}

bool find_look_at(const DexoVec3& start, const DexoVec3& target, DexoRotator* out)
{
    ensure_runtime_objects();
    if (g_lookat_function == nullptr) {
        g_lookat_function = find_object_uncached(
            "Function Engine.KismetMathLibrary.FindLookAtRotation");
    }
    if (g_math_library == nullptr) {
        void* cls = dexo_ue4_find_class("Class Engine.KismetMathLibrary");
        if (cls != nullptr) {
            g_math_library = dexo_ue4_default_object(cls);
        }
    }
    if (g_lookat_function == nullptr || g_math_library == nullptr || out == nullptr) {
        return false;
    }
    struct LookAtParams {
        float start_x;
        float start_y;
        float start_z;
        uint32_t pad0;
        float target_x;
        float target_y;
        float target_z;
        uint32_t pad1;
        float pitch;
        float yaw;
        float roll;
    } params = {};
    params.start_x = start.x;
    params.start_y = start.y;
    params.start_z = start.z;
    params.target_x = target.x;
    params.target_y = target.y;
    params.target_z = target.z;
    process_event(g_math_library, g_lookat_function, &params);
    out->pitch = params.pitch;
    out->yaw = params.yaw;
    out->roll = params.roll;
    return true;
}

bool add_controller_input(void* function, float value)
{
    if (function == nullptr || g_controller == nullptr) {
        return false;
    }
    struct FloatParam {
        float value;
    } params = {value};
    process_event(g_controller, function, &params);
    return true;
}

}  // namespace

bool dexo_ue4_aim_apply(const DexoVec3& target, float smooth)
{
    ensure_runtime_objects();
    if (g_controller == nullptr || g_local_player == nullptr) {
        return false;
    }
    if (g_yaw_function == nullptr) {
        g_yaw_function = find_object_uncached(
            "Function Engine.PlayerController.AddControllerYawInput");
    }
    if (g_pitch_function == nullptr) {
        g_pitch_function = find_object_uncached(
            "Function Engine.PlayerController.AddControllerPitchInput");
    }
    DexoVec3 start;
    if (!get_actor_location(g_local_player, &start)) {
        return false;
    }
    DexoRotator look;
    DexoRotator current;
    if (!find_look_at(start, target, &look) || !get_control_rotation(&current)) {
        return false;
    }
    const float divisor = smooth > 1.0f ? smooth : 1.0f;
    const float yaw_delta = normalize_degrees(look.yaw - current.yaw) / divisor;
    const float pitch_delta = normalize_degrees(look.pitch - current.pitch) / divisor;
    const bool yaw_ok = add_controller_input(g_yaw_function, yaw_delta);
    const bool pitch_ok = add_controller_input(g_pitch_function, pitch_delta);
    return yaw_ok || pitch_ok;
}

extern "C" DEXO_PUBLIC int dexo_ue4_available()
{
    return (g_ready && g_local_player != nullptr) ? 1 : 0;
}

extern "C" DEXO_PUBLIC int dexo_ue4_object_count()
{
    GObjects* objects = gobjects();
    return objects != nullptr ? objects->count : 0;
}

extern "C" DEXO_PUBLIC uint32_t dexo_ue4_fname_index(const char* name)
{
    return find_fname_index(name);
}

extern "C" DEXO_PUBLIC int dexo_ue4_aim_at(float x, float y, float z, float smooth)
{
    return dexo_ue4_aim_apply(DexoVec3(x, y, z), smooth) ? 1 : 0;
}

bool dexo_ue4_apply_vehicle_skin(void* character, int skin_id)
{
    if (character == nullptr || skin_id <= 0) {
        return false;
    }
    ensure_runtime_objects();
    if (g_change_avatar_function == nullptr) {
        g_change_avatar_function = find_object_uncached(
            "Function ShadowTrackerExtra.VehicleAvatarComponent.ChangeItemAvatar");
    }
    void* user_component = read_pointer(character, 0xec0);
    void* avatar = user_component != nullptr ? read_pointer(user_component, 0x1528) : nullptr;
    if (avatar == nullptr || g_change_avatar_function == nullptr) {
        return false;
    }
    struct ChangeAvatarParams {
        int item_id;
        uint8_t force;
        uint8_t pad[3];
    } params = {};
    params.item_id = skin_id;
    params.force = 1;
    process_event(avatar, g_change_avatar_function, &params);
    return true;
}

bool dexo_ue4_apply_weapon_skin(void* character, int weapon_id, int skin_id)
{
    if (character == nullptr || skin_id <= 0) {
        return false;
    }
    ensure_runtime_objects();
    void* weapon = read_pointer(character, 0x2768);
    void* avatar = weapon != nullptr ? read_pointer(weapon, 0x5e8) : nullptr;
    if (avatar == nullptr) {
        return false;
    }
    const int32_t count = read_int32(avatar, 0x830);
    uint8_t* items = static_cast<uint8_t*>(read_pointer(avatar, 0x828));
    if (items != nullptr && count > 0) {
        int slot = -1;
        int empty_slot = -1;
        for (int32_t i = 0; i < count; ++i) {
            const int32_t item = read_int32(items + i * 0x28, 4);
            if (item == weapon_id) {
                slot = i;
                break;
            }
            if (empty_slot < 0 && item > 999999) {
                empty_slot = i;
            }
        }
        if (slot < 0) {
            slot = empty_slot >= 0 ? empty_slot : 0;
        }
        if (slot < count) {
            std::memcpy(items + slot * 0x28 + 4, &skin_id, sizeof(skin_id));
        }
    }
    if (g_delay_avatar_function == nullptr) {
        g_delay_avatar_function = find_object_uncached(
            "Function ShadowTrackerExtra.STExtraWeapon.DelayHandleAvatarMeshChanged");
    }
    if (g_delay_avatar_function != nullptr) {
        uint8_t params[16] = {};
        process_event(weapon, g_delay_avatar_function, params);
    }
    return true;
}

bool dexo_ue4_apply_deadbox_skin(int avatar_id)
{
    if (avatar_id <= 0) {
        return false;
    }
    ensure_runtime_objects();
    void* tomb_class = dexo_ue4_find_class("Class ShadowTrackerExtra.PlayerTombBox");
    void* set_avatar = dexo_ue4_find_function(
        "Function ShadowTrackerExtra.PlayerTombBox.SetAvatarID");
    if (tomb_class == nullptr || set_avatar == nullptr) {
        return false;
    }
    std::vector<void*> boxes;
    collect_class_actors(tomb_class, &boxes);
    if (boxes.empty()) {
        return false;
    }
    struct AvatarParams {
        int avatar_id;
        uint32_t pad;
    } params = {};
    params.avatar_id = avatar_id;
    bool applied = false;
    for (void* box : boxes) {
        process_event(box, set_avatar, &params);
        applied = true;
    }
    return applied;
}

extern "C" DEXO_PUBLIC int dexo_ue4_apply_vehicle_skin_id(void* character, int skin_id)
{
    return dexo_ue4_apply_vehicle_skin(character, skin_id) ? 1 : 0;
}

extern "C" DEXO_PUBLIC int dexo_ue4_apply_weapon_skin_id(void* character, int weapon_id,
                                                         int skin_id)
{
    return dexo_ue4_apply_weapon_skin(character, weapon_id, skin_id) ? 1 : 0;
}

extern "C" DEXO_PUBLIC int dexo_ue4_apply_deadbox_skin_id(int avatar_id)
{
    return dexo_ue4_apply_deadbox_skin(avatar_id) ? 1 : 0;
}
