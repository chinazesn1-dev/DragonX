#ifndef RECOVERED_KENTOS_DEXO_HOOKS_H
#define RECOVERED_KENTOS_DEXO_HOOKS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Replaces every PLT/GOT entry of `symbol` in the already loaded `module_name`
 * (for example "libEGL.so") with `replacement`.  The previous pointer is stored
 * in `*original` when `original` is not NULL.
 *
 * Returns the number of patched slots, or 0 when the module or symbol was not
 * found.
 */
int dexo_hook_symbol(const char* module_name, const char* symbol,
                     void* replacement, void** original);

/* Same, but patches the GOT entry in every currently loaded module. */
int dexo_hook_symbol_all(const char* symbol, void* replacement, void** original);

/* Returns 1 when a module with this basename is currently loaded. */
int dexo_module_loaded(const char* module_name);

/* Returns the load base of a module, or 0 when it is not loaded. */
uintptr_t dexo_module_base(const char* module_name);

#ifdef __cplusplus
}
#endif

#endif
