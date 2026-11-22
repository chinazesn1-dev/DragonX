#ifndef RECOVERED_KENTOS_DEXO_MENU_H
#define RECOVERED_KENTOS_DEXO_MENU_H

#include "dexo_app.h"

/* Draws the reconstructed in-game menu. Requires a current ImGui frame. */
void draw_dexo_menu(DexoAppState& state);

/* Small floating button that toggles the menu. */
void draw_dexo_logo_button(DexoAppState& state);

#endif
