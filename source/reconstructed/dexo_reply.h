#ifndef RECOVERED_KENTOS_DEXO_REPLY_H
#define RECOVERED_KENTOS_DEXO_REPLY_H

#include <string>
#include <cstdint>

struct DexoReplyFields {
    bool status;
    std::string reason;
    std::string expiration_text;
    std::string mod_name;
    std::string mod_status;
    std::int64_t response_timestamp;
};

/* Parses display fields. A true status is not a license decision. */
DexoReplyFields parse_dexo_reply(const std::string& response);
/* response points to a NUL-terminated buffer. */
DexoReplyFields parse_dexo_reply(const char* response);

#endif
