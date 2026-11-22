#ifndef RECOVERED_KENTOS_DEXO_INLINE_HOOK_H
#define RECOVERED_KENTOS_DEXO_INLINE_HOOK_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Minimal conservative AArch64 inline hook.
 *
 * Copies the first four instructions to an executable trampoline and patches
 * the entry with `ldr x16, #8; br x16; <replacement>`.  Returns 0 when the
 * prologue contains PC-relative instructions (ADR/ADRP/B/BL/literal load or
 * compare-and-branch), because those cannot be relocated safely.
 */
int dexo_inline_hook(void* target, void* replacement, void** trampoline);

#ifdef __cplusplus
}
#endif

#endif
