#include "dexo_reply.h"

#include "json.hpp"

#include <cstdlib>
#include <limits>

using nlohmann::json;

#ifdef DEXO_SEPARATE_JSON_SERIALIZER
extern template void nlohmann::detail::serializer<json>::dump(
    const json&, bool, bool, unsigned int, unsigned int);
#endif

static std::string text(const json& data, const char* field)
{
    const auto value = data.find(field);
    if (value == data.end()) {
        return {};
    }
    return value->is_string() ? value->get<std::string>() : value->dump();
}

static std::string first_string(const json& data, const char* primary,
                                const char* alternative)
{
    const auto first = data.find(primary);
    if (first != data.end() && first->is_string()) {
        const auto& value = first->get_ref<const std::string&>();
        if (!value.empty()) {
            return value;
        }
    }
    const auto second = data.find(alternative);
    return second != data.end() && second->is_string()
        ? second->get<std::string>() : std::string{};
}

static DexoReplyFields read_dexo_reply_fields(const json& root)
{
    DexoReplyFields fields{};
    const auto status = root.find("status");
    fields.status = status != root.end() && *status == json(true);
    if (!fields.status) {
        fields.reason = root.at("reason").get<std::string>();
        return fields;
    }
    const auto& data = root.at("data");
    data.get_ref<const json::object_t&>();
    fields.expiration_text = text(data, "EXP");
    fields.mod_name = first_string(data, "MOD_NAME", "modname");
    fields.mod_status = first_string(data, "MOD_STATUS", "mod_status");
    const auto timestamp = data.find("rng");
    if (timestamp != data.end()) {
        if (timestamp->is_number_unsigned()) {
            const auto value = timestamp->get<std::uint64_t>();
            if (value <= static_cast<std::uint64_t>(std::numeric_limits<std::int64_t>::max()))
                fields.response_timestamp = static_cast<std::int64_t>(value);
        } else if (timestamp->is_number_integer()) {
            fields.response_timestamp = timestamp->get<std::int64_t>();
        } else if (timestamp->is_number_float()) {
            const auto value = timestamp->get<double>();
            const auto limit = static_cast<double>(std::numeric_limits<std::int64_t>::max());
            if (value >= -limit && value < limit)
                fields.response_timestamp = static_cast<std::int64_t>(value);
        } else if (timestamp->is_string()) {
            fields.response_timestamp = std::strtoll(timestamp->get_ref<const std::string&>().c_str(),
                                                      nullptr, 10);
        }
    }
    return fields;
}

DexoReplyFields parse_dexo_reply(const std::string& response)
{
    return read_dexo_reply_fields(json::parse(response, nullptr, true, false));
}

DexoReplyFields parse_dexo_reply(const char* response)
{
    return read_dexo_reply_fields(json::parse(response, nullptr, true, false));
}
