#ifndef RECOVERED_KENTOS_DEXO_LOGIN_BACKEND_H
#define RECOVERED_KENTOS_DEXO_LOGIN_BACKEND_H

#include "dexo_login_window.h"

#include <android/input.h>
#include <android/native_window.h>

/* Use on the UI thread with the caller's ImGui and GLES3 contexts current. */
bool init_dexo_login_backend(ANativeWindow* window);
void shutdown_dexo_login_backend();
bool handle_dexo_login_input(AInputEvent* event, float scale_x = 1.0f,
                             float scale_y = 1.0f);
bool render_dexo_login_frame(DexoLoginWindow& state, const char* rejection,
                             DexoOpenKeyPage open_key_page = nullptr,
                             void* link_context = nullptr);

#endif
