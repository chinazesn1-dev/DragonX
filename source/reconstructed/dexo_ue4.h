#ifndef RECOVERED_KENTOS_DEXO_UE4_H
#define RECOVERED_KENTOS_DEXO_UE4_H

#include <cstdint>
#include <string>

#include "dexo_app.h"
#include "dexo_gameplay.h"

/*
 * Reconstructed UE4 reflection layer.
 *
 * The original library resolves objects through the global object array
 * (libUE4 + 0x0f9ae670), the FName pool (libUE4 + 0x0901bed0) and calls
 * UFunctions through UObject::ProcessEvent at vtable offset 0x260.
 */
bool dexo_ue4_init(uintptr_t libue4_base);
bool dexo_ue4_ready();
uintptr_t dexo_ue4_base();

void* dexo_ue4_find_object(const char* full_name);
void* dexo_ue4_find_class(const char* full_name);
void* dexo_ue4_find_function(const char* full_name);
void* dexo_ue4_default_object(void* cls);
void* dexo_ue4_class_of(void* object);
bool dexo_ue4_is_a(void* object, void* cls);
void dexo_ue4_process_event(void* object, void* function, void* params);

std::string dexo_ue4_get_name(void* object);
std::string dexo_ue4_full_name(void* object);
uint32_t dexo_ue4_find_fname(const char* name);

void* dexo_ue4_local_controller();
void* dexo_ue4_local_player();

/* Project a world position with Engine.GameplayStatics.ProjectWorldToScreen. */
bool dexo_ue4_project(const DexoVec3& world, DexoVec2* screen);

/* Read the live actor list and fill a DexoWorld snapshot. */
bool dexo_ue4_read_world(DexoWorld* world, const DexoAimbotConfig& aim,
                         const DexoEspConfig& esp);

/* Read the bones configured by the ESP skeleton table for one actor. */
bool dexo_ue4_read_bones(void* actor, DexoPlayer* player);

/* Compute FindLookAtRotation and feed it through AddControllerYaw/PitchInput. */
bool dexo_ue4_aim_apply(const DexoVec3& target, float smooth);

#ifdef __cplusplus
extern "C" {
#endif

int dexo_ue4_available();
int dexo_ue4_object_count();
uint32_t dexo_ue4_fname_index(const char* name);

#ifdef __cplusplus
}
#endif

#endif
