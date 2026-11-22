#ifndef RECOVERED_KENTOS_KEY_TRANSPORT_H
#define RECOVERED_KENTOS_KEY_TRANSPORT_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

enum { KEY_INPUT_CAPACITY = 128, KEY_REQUEST_CAPACITY = 4096 };

/* input must hold KEY_INPUT_CAPACITY bytes. */
void copy_pasted_key(char *input, const char *clipboard);
int key_input_can_activate(const char *input);

/* Compare UI time with the timestamp saved when Activate was pressed. */
int key_input_wait_elapsed(double now_seconds, float activation_seconds);

struct key_response_body {
    char *data;
    size_t length;
};

/* Derive the game field from the leading ASCII letters of the key.
 * Returns the required length, excluding NUL. A zero capacity is allowed. */
size_t derive_key_game(char *game, size_t capacity, const char *user_key);

/* body must hold KEY_REQUEST_CAPACITY bytes. A result at least that
 * large indicates truncation. Arguments are copied without escaping. */
int format_key_request(char *body, const char *game,
                       const char *user_key, const char *serial);

/* Start with a zeroed body and free its data after the transfer. */
size_t append_key_response(char *chunk, size_t size, size_t count, void *userdata);

/* Returns a libcurl error code. Initialize libcurl first, pass an empty
 * body and free body->data after the call. HTTPS verification stays enabled. */
int send_key_request(const char *url, const char *game, const char *user_key,
                     const char *serial, struct key_response_body *body,
                     long *http_status);

#ifdef __cplusplus
}
#endif

#endif
