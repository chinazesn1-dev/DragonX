#include "key_transport.h"

#include <string.h>

void copy_pasted_key(char *input, const char *clipboard)
{
    strncpy(input, clipboard, KEY_INPUT_CAPACITY - 1);
    input[KEY_INPUT_CAPACITY - 1] = '\0';
}

int key_input_can_activate(const char *input)
{
    return strlen(input) >= 4;
}

int key_input_wait_elapsed(double now_seconds, float activation_seconds)
{
    return now_seconds - (double)activation_seconds > 2.0;
}
