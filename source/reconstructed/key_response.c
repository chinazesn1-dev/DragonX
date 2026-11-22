#include "key_transport.h"

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

size_t append_key_response(char *chunk, size_t size, size_t count, void *userdata)
{
    struct key_response_body *body = userdata;
    if (size != 0 && count > SIZE_MAX / size) {
        return 0;
    }
    size_t bytes = size * count;
    if (body->length == SIZE_MAX ||
        bytes > SIZE_MAX - body->length - 1) {
        return 0;
    }
    char *data = realloc(body->data, body->length + bytes + 1);
    if (data == NULL) {
        return 0;
    }
    if (bytes != 0) {
        memcpy(data + body->length, chunk, bytes);
    }
    body->length += bytes;
    data[body->length] = '\0';
    body->data = data;
    return bytes;
}
