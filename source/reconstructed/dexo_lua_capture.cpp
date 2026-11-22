#include "dexo_lua.h"

#if defined(_WIN32)

extern "C" int dexo_lua_capture_install()
{
    return 0;
}

#else

#include <dlfcn.h>

#include "dexo_inline_hook.h"

namespace {

using LoadBufferFn = int (*)(void*, const char*, size_t, const char*, const char*);
using PcallFn = int (*)(void*, int, int, int);
using GetTopFn = int (*)(void*);
using SetTopFn = int (*)(void*, int);

LoadBufferFn g_load_trampoline = nullptr;
PcallFn g_pcall_trampoline = nullptr;
GetTopFn g_gettop = nullptr;
SetTopFn g_settop = nullptr;
void* g_bound_state = nullptr;

void bind_state(void* state)
{
    if (state == nullptr || state == g_bound_state) {
        return;
    }
    if (g_load_trampoline == nullptr || g_pcall_trampoline == nullptr) {
        return;
    }
    if (dexo_lua_bind(state, reinterpret_cast<void*>(g_load_trampoline),
                      reinterpret_cast<void*>(g_pcall_trampoline),
                      reinterpret_cast<void*>(g_gettop),
                      reinterpret_cast<void*>(g_settop))) {
        g_bound_state = state;
    }
}

int load_buffer_hook(void* state, const char* buffer, size_t size,
                     const char* name, const char* mode)
{
    bind_state(state);
    return g_load_trampoline(state, buffer, size, name, mode);
}

int pcall_hook(void* state, int nargs, int nresults, int errfunc)
{
    bind_state(state);
    return g_pcall_trampoline(state, nargs, nresults, errfunc);
}

}  // namespace

extern "C" __attribute__((visibility("default"))) int dexo_lua_capture_install()
{
    void* handle = nullptr;
#ifdef RTLD_NOLOAD
    handle = dlopen("libUE4.so", RTLD_NOW | RTLD_NOLOAD);
#endif
    if (handle == nullptr) {
        handle = dlopen("libUE4.so", RTLD_NOW);
    }
    void* lookup_handle = handle != nullptr ? handle : RTLD_DEFAULT;
    void* load = dlsym(lookup_handle, "luaL_loadbufferx");
    void* pcall = dlsym(lookup_handle, "lua_pcall");
    g_gettop = reinterpret_cast<GetTopFn>(dlsym(lookup_handle, "lua_gettop"));
    g_settop = reinterpret_cast<SetTopFn>(dlsym(lookup_handle, "lua_settop"));
    int installed = 0;
    if (load != nullptr) {
        installed |= dexo_inline_hook(
            load, reinterpret_cast<void*>(&load_buffer_hook),
            reinterpret_cast<void**>(&g_load_trampoline));
    }
    if (pcall != nullptr) {
        installed |= dexo_inline_hook(
            pcall, reinterpret_cast<void*>(&pcall_hook),
            reinterpret_cast<void**>(&g_pcall_trampoline));
    }
    return installed;
}

#endif
