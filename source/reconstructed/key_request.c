#include "key_transport.h"

#include <stdio.h>
#include <string.h>

size_t derive_key_game(char *game, size_t capacity, const char *user_key)
{
    size_t length = 0;
    if (user_key != NULL) {
        for (unsigned char ch = (unsigned char)user_key[0];
             (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
             ch = (unsigned char)user_key[++length]) {
            if (capacity != 0 && length < capacity - 1) {
                game[length] = (char)(ch >= 'a' ? ch - 'a' + 'A' : ch);
            }
        }
    }
    if (length == 0) {
        static const char default_game[] = "PUBG";
        length = sizeof(default_game) - 1;
        if (capacity > 1) {
            size_t count = length < capacity - 1 ? length : capacity - 1;
            memcpy(game, default_game, count);
        }
    }
    if (capacity != 0) {
        game[length < capacity - 1 ? length : capacity - 1] = '\0';
    }
    return length;
}

int format_key_request(char *body, const char *game,
                       const char *user_key, const char *serial)
{
    return snprintf(body, KEY_REQUEST_CAPACITY, "game=%s&user_key=%s&serial=%s",
                    game, user_key, serial);
}
