#ifndef RECOVERED_KENTOS_DEXO_SKIN_CONFIG_H
#define RECOVERED_KENTOS_DEXO_SKIN_CONFIG_H

#include "dexo_app.h"

/* Loads the original configs.ini-style key=value file. */
bool dexo_skin_config_load(const char* path = "/sdcard/Dexo/configs.ini");

/* Returns an integer value or `fallback`. */
int dexo_skin_config_get(const char* key, int fallback = 0);

/* Applies lua_*_res/outfit_res/bag_res/helmet_res/vehicle_res to the skin state. */
void dexo_skin_config_apply(DexoSkinConfig& skin);

#ifdef __cplusplus
extern "C" {
#endif

int dexo_skin_config_load_file(const char* path);
int dexo_skin_config_value(const char* key, int fallback);

#ifdef __cplusplus
}
#endif

#endif
