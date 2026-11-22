#include "dexo_exchange.h"
#include "key_transport.h"

#include <cstdlib>
#include <ctime>
#include <memory>

DexoExchange request_dexo_reply(const char* url, const char* user_key,
                                const char* serial)
{
    DexoExchange exchange{};
    const size_t game_length = derive_key_game(nullptr, 0, user_key);
    std::string game(game_length + 1, '\0');
    derive_key_game(&game[0], game.size(), user_key);

    key_response_body body{};
    exchange.transport_status = send_key_request(url, game.c_str(), user_key,
                                                 serial, &body, &exchange.http_status);
    const std::unique_ptr<char, decltype(&std::free)> data(body.data, &std::free);
    if (exchange.transport_status == 0 && exchange.http_status >= 200 &&
        exchange.http_status < 300 && data != nullptr && body.length != 0) {
        exchange.reply = parse_dexo_reply(data.get());
        exchange.has_reply = true;
        if (exchange.reply.status) {
            const auto received_at = static_cast<std::int64_t>(std::time(nullptr));
            // Compare against the cutoff without adding to the timestamp from the response.
            exchange.reply_is_fresh = received_at > 0 &&
                exchange.reply.response_timestamp > received_at - 30;
        }
    }
    return exchange;
}
