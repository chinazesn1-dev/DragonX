#include <android/log.h>
#include <android/native_window.h>
#include <dlfcn.h>
#include <pthread.h>
#include <unistd.h>

#include <EGL/egl.h>

#include "imgui.h"
#include "imgui_impl_android.h"
#include "imgui_impl_opengl3.h"

#include "dexo_app.h"
#include "dexo_hooks.h"
#include "dexo_login_window.h"
#include "dexo_lua.h"
#include "dexo_menu.h"

extern "C" const void* dexo_gameplay_anchor();

#define DEXO_LOG_TAG "DEXO"
#define DEXO_LOGI(...) __android_log_print(ANDROID_LOG_INFO, DEXO_LOG_TAG, __VA_ARGS__)

namespace {

EGLBoolean (*g_original_swap_buffers)(EGLDisplay, EGLSurface) = nullptr;
int32_t (*g_original_window_width)(ANativeWindow*) = nullptr;
int32_t (*g_original_window_height)(ANativeWindow*) = nullptr;

int g_display_width = 0;
int g_display_height = 0;
bool g_imgui_ready = false;
bool g_config_loaded = false;

void ensure_imgui()
{
    if (g_imgui_ready) {
        return;
    }
    if (!ImGui_ImplAndroid_Init(nullptr)) {
        DEXO_LOGI("ImGui_ImplAndroid_Init failed");
        return;
    }
    if (!ImGui_ImplOpenGL3_Init("#version 300 es")) {
        DEXO_LOGI("ImGui_ImplOpenGL3_Init failed");
        ImGui_ImplAndroid_Shutdown();
        return;
    }
    load_dexo_login_font(nullptr, nullptr, nullptr);
    if (!g_config_loaded) {
        load_dexo_config();
        g_config_loaded = true;
    }
    g_dexo_force_lua_inject = dexo_lua_request_inject;
    DEXO_LOGI("gameplay anchor %p", dexo_gameplay_anchor());
    g_imgui_ready = true;
    DEXO_LOGI("ImGui backend ready");
}

EGLBoolean swap_buffers_hook(EGLDisplay display, EGLSurface surface)
{
    EGLint width = 0;
    EGLint height = 0;
    if (display != EGL_NO_DISPLAY && surface != EGL_NO_SURFACE &&
        eglQuerySurface(display, surface, EGL_WIDTH, &width) &&
        eglQuerySurface(display, surface, EGL_HEIGHT, &height) &&
        width > 0 && height > 0) {
        g_display_width = width;
        g_display_height = height;
        ensure_imgui();
        if (g_imgui_ready) {
            ImGuiIO& io = ImGui::GetIO();
            io.DisplaySize = ImVec2(static_cast<float>(width), static_cast<float>(height));
            ImGui_ImplOpenGL3_NewFrame();
            ImGui_ImplAndroid_NewFrame(width, height);
            ImGui::NewFrame();
            if (dexo_lua_take_injection_request()) {
                g_dexo_app.lua_injected = true;
                g_dexo_app.status = "Lua Inject Triggered!";
                DEXO_LOGI("Lua injection requested");
            }
            draw_dexo_logo_button(g_dexo_app);
            draw_dexo_menu(g_dexo_app);
            ImGui::Render();
            ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        }
    }
    return g_original_swap_buffers != nullptr
        ? g_original_swap_buffers(display, surface)
        : EGL_FALSE;
}

int32_t window_width_hook(ANativeWindow* window)
{
    if (g_display_width > 0) {
        return g_display_width;
    }
    return g_original_window_width != nullptr ? g_original_window_width(window) : 0;
}

int32_t window_height_hook(ANativeWindow* window)
{
    if (g_display_height > 0) {
        return g_display_height;
    }
    return g_original_window_height != nullptr ? g_original_window_height(window) : 0;
}

void install_hooks()
{
    while (!dexo_module_loaded("libUE4.so")) {
        usleep(100000);
    }
    for (;;) {
        const int slots = dexo_hook_symbol_all("eglSwapBuffers",
                                               reinterpret_cast<void*>(&swap_buffers_hook),
                                               reinterpret_cast<void**>(&g_original_swap_buffers));
        if (slots > 0) {
            DEXO_LOGI("eglSwapBuffers hooked in %d GOT slots", slots);
            break;
        }
        usleep(100000);
    }
    dexo_hook_symbol_all("ANativeWindow_getWidth",
                         reinterpret_cast<void*>(&window_width_hook),
                         reinterpret_cast<void**>(&g_original_window_width));
    dexo_hook_symbol_all("ANativeWindow_getHeight",
                         reinterpret_cast<void*>(&window_height_hook),
                         reinterpret_cast<void**>(&g_original_window_height));
    DEXO_LOGI("window size hooks installed");
}

void* entry_thread(void*)
{
    install_hooks();
    return nullptr;
}

}  // namespace

extern "C" __attribute__((visibility("default"))) void dexo_install_hooks_now()
{
    install_hooks();
}

extern "C" __attribute__((visibility("default"), constructor)) void dexo_entry_constructor()
{
    pthread_t thread;
    if (pthread_create(&thread, nullptr, entry_thread, nullptr) == 0) {
        pthread_detach(thread);
    }
}

