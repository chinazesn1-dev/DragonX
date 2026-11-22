#ifndef RECOVERED_KENTOS_DEXO_EXCHANGE_H
#define RECOVERED_KENTOS_DEXO_EXCHANGE_H

#include "dexo_reply.h"

struct DexoExchange {
    int transport_status;
    long http_status;
    bool has_reply;
    DexoReplyFields reply;
    // Freshness result for a successful reply, independent of license validation.
    bool reply_is_fresh;
};

/* Run outside the render loop after initializing libcurl.
 * Invalid JSON in a successful HTTP response may throw. */
DexoExchange request_dexo_reply(const char* url, const char* user_key,
                                const char* serial);

#endif
