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

/* Bind the game Lua state and its C API functions. */
bool dexo_lua_bind(void* state, void* loadbufferx, void* pcall,
                   void* gettop, void* settop);

/* Resolve luaL_loadbufferx/lua_pcall from the loaded game module. */
bool dexo_lua_resolve();

/* luaL_loadbufferx + lua_pcall with the original "t" mode. */
bool dexo_lua_execute(const char* script, const char* name);

/* The original 165 FPS unlock chunk. */
const char* dexo_lua_fps_script();

#ifdef __cplusplus
extern "C" {
#endif

int dexo_lua_bind_state(void* state, void* loadbufferx, void* pcall,
                        void* gettop, void* settop);
int dexo_lua_run(const char* script, const char* name);
const char* dexo_lua_fps165();
int dexo_lua_capture_install();

#ifdef __cplusplus
}
#endif

#endif
