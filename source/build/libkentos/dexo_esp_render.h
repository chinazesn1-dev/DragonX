#ifndef RECOVERED_KENTOS_DEXO_ESP_RENDER_H
#define RECOVERED_KENTOS_DEXO_ESP_RENDER_H

#include "dexo_app.h"
#include "dexo_gameplay.h"

struct ImDrawList;

void dexo_render_esp(ImDrawList* draw, const DexoWorld& world,
                     const DexoEspConfig& esp, const DexoAimbotConfig& aim,
                     const DexoProjector& projector,
                     int screen_width, int screen_height);

#endif
