#ifndef RECOVERED_KENTOS_DEXO_LUA_H
#define RECOVERED_KENTOS_DEXO_LUA_H

#include <string>

enum class DexoSkinSlot {
    Outfit = 0,
    Hat,
    Mask,
    Top,
    Pants,
    Shoes,
    Bag,
    Helmet,
    Vehicle,
    Weapon,
};

/* Exact resource names used by the original KENTOS Lua skin code. */
const char* dexo_lua_resource(DexoSkinSlot slot);
const char* dexo_config_resource(DexoSkinSlot slot);

/* Weapon skins use the original "lua_wskin_%d" name. */
std::string dexo_lua_skin_name(DexoSkinSlot slot, int id);

/* Queue/consume the "Force Inject Lua Now" request. */
void dexo_lua_request_inject();
bool dexo_lua_take_injection_request();

/* Original status strings. */
const char* dexo_lua_status(bool injected);

#endif
