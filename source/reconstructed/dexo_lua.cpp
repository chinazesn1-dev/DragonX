#if defined(_MSC_VER)
#define DEXO_PUBLIC
#else
#define DEXO_PUBLIC __attribute__((visibility("default")))
#endif

#include "dexo_lua.h"

#include <atomic>
#include <cstdio>

namespace {

std::atomic<bool> g_injection_requested{false};

}  // namespace

const char* dexo_lua_resource(DexoSkinSlot slot)
{
    switch (slot) {
    case DexoSkinSlot::Outfit:
        return "lua_outfit_res";
    case DexoSkinSlot::Hat:
        return "lua_hat_res";
    case DexoSkinSlot::Mask:
        return "lua_mask_res";
    case DexoSkinSlot::Top:
        return "lua_top_res";
    case DexoSkinSlot::Pants:
        return "lua_pants_res";
    case DexoSkinSlot::Shoes:
        return "lua_shoes_res";
    case DexoSkinSlot::Bag:
        return "lua_bag_res";
    case DexoSkinSlot::Helmet:
        return "lua_helmet_res";
    case DexoSkinSlot::Vehicle:
        return "lua_vehicle_res";
    case DexoSkinSlot::Weapon:
        return "lua_wskin";
    }
    return "";
}

const char* dexo_config_resource(DexoSkinSlot slot)
{
    switch (slot) {
    case DexoSkinSlot::Outfit:
        return "outfit_res";
    case DexoSkinSlot::Bag:
        return "bag_res";
    case DexoSkinSlot::Helmet:
        return "helmet_res";
    case DexoSkinSlot::Vehicle:
        return "vehicle_res";
    case DexoSkinSlot::Weapon:
        return "wskin";
    default:
        return dexo_lua_resource(slot);
    }
}

std::string dexo_lua_skin_name(DexoSkinSlot slot, int id)
{
    if (slot == DexoSkinSlot::Weapon) {
        char buffer[32];
        std::snprintf(buffer, sizeof(buffer), "lua_wskin_%d", id);
        return std::string(buffer);
    }
    return std::string(dexo_lua_resource(slot));
}

void dexo_lua_request_inject()
{
    g_injection_requested.store(true);
}

bool dexo_lua_take_injection_request()
{
    return g_injection_requested.exchange(false);
}

const char* dexo_lua_status(bool injected)
{
    return injected ? "Status: LUA INJECTED & RUNNING"
                    : "Status: WAITING INJECT (ENTER LOBBY)";
}

extern "C" DEXO_PUBLIC
const char* dexo_lua_resource_name(int slot)
{
    return dexo_lua_resource(static_cast<DexoSkinSlot>(slot));
}

