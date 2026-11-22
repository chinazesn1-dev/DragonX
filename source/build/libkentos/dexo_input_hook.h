#ifndef RECOVERED_KENTOS_DEXO_INPUT_HOOK_H
#define RECOVERED_KENTOS_DEXO_INPUT_HOOK_H

#ifdef __cplusplus
extern "C" {
#endif

/* Hooks android::InputConsumer::initializeMotionEvent and feeds ImGui. */
int dexo_input_hook_install();

#ifdef __cplusplus
}
#endif

#endif
