#ifndef RECOVERED_KENTOS_DEXO_LOGIN_WINDOW_H
#define RECOVERED_KENTOS_DEXO_LOGIN_WINDOW_H

#include "key_transport.h"

struct DexoLoginWindow {
    char key[KEY_INPUT_CAPACITY] = {};
    int key_cursor = 0;
    float key_scroll = 0.0f;
    bool key_focused = false;
    float activation_seconds = 0.0f;
    float rejection_until = 0.0f;
    bool waiting = false;
    bool request_pending = false;
};

using DexoOpenKeyPage = void (*)(void* context);

/* Call on the UI thread after a rejected request. */
void reject_dexo_login(DexoLoginWindow& state, double now_seconds);

/* Load the extracted Jost TTF into the current context before the first frame. */
bool load_dexo_login_font(const char* font_path, const char* icon_path = nullptr,
                          const char* droid_sans_path = nullptr);

/* Returns true once per activation. The caller owns the request and its outcome. */
bool draw_dexo_login(DexoLoginWindow& state, const char* rejection,
                     DexoOpenKeyPage open_key_page = nullptr,
                     void* link_context = nullptr);

#endif
