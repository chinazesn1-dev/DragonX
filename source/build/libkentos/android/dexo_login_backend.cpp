#include "dexo_login_backend.h"

#include <EGL/egl.h>

#include "imgui.h"
#include "imgui_impl_android.h"
#include "imgui_impl_opengl3.h"

bool init_dexo_login_backend(ANativeWindow* window)
{
    if (window == nullptr || !ImGui_ImplAndroid_Init(window)) {
        return false;
    }
    if (!ImGui_ImplOpenGL3_Init("#version 300 es")) {
        ImGui_ImplAndroid_Shutdown();
        return false;
    }
    return true;
}

void shutdown_dexo_login_backend()
{
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplAndroid_Shutdown();
}

bool handle_dexo_login_input(AInputEvent* event, float scale_x, float scale_y)
{
    return ImGui_ImplAndroid_HandleInputEvent(event, scale_x, scale_y) != 0;
}

bool render_dexo_login_frame(DexoLoginWindow& state, const char* rejection,
                             DexoOpenKeyPage open_key_page, void* link_context)
{
    const EGLDisplay display = eglGetCurrentDisplay();
    const EGLSurface surface = eglGetCurrentSurface(EGL_DRAW);
    EGLint width = 0;
    EGLint height = 0;
    if (display == EGL_NO_DISPLAY || surface == EGL_NO_SURFACE ||
        !eglQuerySurface(display, surface, EGL_WIDTH, &width) ||
        !eglQuerySurface(display, surface, EGL_HEIGHT, &height) ||
        width < 1 || height < 1) {
        return false;
    }
    ImGui::GetIO().DisplaySize = ImVec2(static_cast<float>(width), static_cast<float>(height));
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(width, height);
    ImGui::NewFrame();
    const bool submit = draw_dexo_login(state, rejection, open_key_page, link_context);
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    return submit;
}
