#include "dexo_input_hook.h"

#if defined(_WIN32)

extern "C" int dexo_input_hook_install()
{
    return 0;
}

#else

#include <android/input.h>
#include <dlfcn.h>

#include "imgui.h"
#include "imgui_impl_android.h"
#include "dexo_inline_hook.h"

namespace {

using InitializeMotionEventFn = void (*)(void* self, void* event, const void* message);

InitializeMotionEventFn g_original = nullptr;

void initialize_motion_event_hook(void* self, void* event, const void* message)
{
    if (event != nullptr) {
        ImGui_ImplAndroid_HandleInputEvent(static_cast<AInputEvent*>(event), 1.0f, 1.0f);
    }
    if (g_original != nullptr) {
        g_original(self, event, message);
    }
}

const char* const kSymbols[] = {
    "_ZN7android13InputConsumer21initializeMotionEventEPNS_11MotionEventEPKNS_12InputMessageE",
    "_ZN7android12_GLOBAL__N_121initializeMotionEventERNS_11MotionEventERKNS_12InputMessageE",
};

}  // namespace

extern "C" __attribute__((visibility("default"))) int dexo_input_hook_install()
{
    void* handle = nullptr;
#ifdef RTLD_NOLOAD
    handle = dlopen("libinput.so", RTLD_NOW | RTLD_NOLOAD);
#endif
    if (handle == nullptr) {
        handle = dlopen("libinput.so", RTLD_NOW);
    }
    void* lookup_handle = handle != nullptr ? handle : RTLD_DEFAULT;
    for (const char* symbol : kSymbols) {
        void* target = dlsym(lookup_handle, symbol);
        if (target == nullptr) {
            continue;
        }
        if (dexo_inline_hook(target,
                             reinterpret_cast<void*>(&initialize_motion_event_hook),
                             reinterpret_cast<void**>(&g_original))) {
            return 1;
        }
    }
    return 0;
}

#endif
