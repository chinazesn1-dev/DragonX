#include "dexo_lua.h"

#include <atomic>
#include <cstdio>
#include <cstring>

#if !defined(_WIN32)
#include <dlfcn.h>
#endif

#if defined(_MSC_VER)
#define DEXO_PUBLIC
#else
#define DEXO_PUBLIC __attribute__((visibility("default")))
#endif

namespace {

using LuaLoadBufferX = int (*)(void*, const char*, size_t, const char*, const char*);
using LuaPcall = int (*)(void*, int, int, int);
using LuaGetTop = int (*)(void*);
using LuaSetTop = int (*)(void*, int);

struct DexoLuaVm {
    void* state = nullptr;
    LuaLoadBufferX loadbufferx = nullptr;
    LuaPcall pcall = nullptr;
    LuaGetTop gettop = nullptr;
    LuaSetTop settop = nullptr;
};

DexoLuaVm g_vm;
std::atomic<bool> g_injection_requested{false};

const char* const kFpsScript = R"LUA(pcall(function()
  pcall(function()
    if type(console) == "table" and console.command then
      console.command("t.MaxFPS 165")
      console.command("r.FrameRateLimit 165")
    end
  end)
  pcall(function()
    local gs = require("client.logic.setting.logic_setting_graphics")
    if gs then
      pcall(function()
        if gs.SetFPS then gs.SetFPS(8) end
        if gs.SetFPSFineTuneSwitch then gs.SetFPSFineTuneSwitch(true) end
        if gs.SetFPSFineTuneNum then gs.SetFPSFineTuneNum(165) end
        if gs.FPSFineTuneSwitch ~= nil then gs.FPSFineTuneSwitch = true end
        if gs.FPSFineTuneNum ~= nil then gs.FPSFineTuneNum = 165 end
      end)
    end
  end)
  pcall(function()
    if type(ExecuteConsoleCommand) == "function" then
      ExecuteConsoleCommand("t.MaxFPS 165")
      ExecuteConsoleCommand("r.FrameRateLimit 165")
    end
  end)
end)
)LUA";

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

bool dexo_lua_bind(void* state, void* loadbufferx, void* pcall,
                   void* gettop, void* settop)
{
    if (state == nullptr || loadbufferx == nullptr || pcall == nullptr) {
        return false;
    }
    g_vm.state = state;
    g_vm.loadbufferx = reinterpret_cast<LuaLoadBufferX>(loadbufferx);
    g_vm.pcall = reinterpret_cast<LuaPcall>(pcall);
    g_vm.gettop = reinterpret_cast<LuaGetTop>(gettop);
    g_vm.settop = reinterpret_cast<LuaSetTop>(settop);
    return true;
}

bool dexo_lua_resolve()
{
    if (g_vm.loadbufferx != nullptr && g_vm.pcall != nullptr) {
        return g_vm.state != nullptr;
    }
#if defined(_WIN32)
    return false;
#else
    void* handle = nullptr;
#ifdef RTLD_NOLOAD
    handle = dlopen("libUE4.so", RTLD_NOW | RTLD_NOLOAD);
#endif
    if (handle == nullptr) {
        handle = dlopen("libUE4.so", RTLD_NOW);
    }
    const char* names[] = {
        "luaL_loadbufferx", "lua_pcall", "lua_gettop", "lua_settop",
    };
    void* symbols[4] = {nullptr, nullptr, nullptr, nullptr};
    for (int i = 0; i < 4; ++i) {
        if (handle != nullptr) {
            symbols[i] = dlsym(handle, names[i]);
        }
        if (symbols[i] == nullptr) {
            symbols[i] = dlsym(RTLD_DEFAULT, names[i]);
        }
    }
    if (symbols[0] == nullptr || symbols[1] == nullptr) {
        return false;
    }
    g_vm.loadbufferx = reinterpret_cast<LuaLoadBufferX>(symbols[0]);
    g_vm.pcall = reinterpret_cast<LuaPcall>(symbols[1]);
    g_vm.gettop = reinterpret_cast<LuaGetTop>(symbols[2]);
    g_vm.settop = reinterpret_cast<LuaSetTop>(symbols[3]);
    return g_vm.state != nullptr;
#endif
}

bool dexo_lua_execute(const char* script, const char* name)
{
    if (script == nullptr || g_vm.state == nullptr ||
        g_vm.loadbufferx == nullptr || g_vm.pcall == nullptr) {
        return false;
    }
    if (name == nullptr) {
        name = "script";
    }
    const size_t length = std::strlen(script);
    if (length == 0 || length > 0x80000) {
        return false;
    }
    const int load_result = g_vm.loadbufferx(g_vm.state, script, length, name, "t");
    if (load_result != 0) {
        return false;
    }
    return g_vm.pcall(g_vm.state, 0, 0, 0) == 0;
}

const char* dexo_lua_fps_script()
{
    return kFpsScript;
}

extern "C" DEXO_PUBLIC int dexo_lua_bind_state(void* state, void* loadbufferx,
                                               void* pcall, void* gettop,
                                               void* settop)
{
    return dexo_lua_bind(state, loadbufferx, pcall, gettop, settop) ? 1 : 0;
}

extern "C" DEXO_PUBLIC int dexo_lua_run(const char* script, const char* name)
{
    dexo_lua_resolve();
    return dexo_lua_execute(script, name) ? 1 : 0;
}

extern "C" DEXO_PUBLIC const char* dexo_lua_fps165()
{
    return kFpsScript;
}
