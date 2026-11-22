#include "json.hpp"

template void nlohmann::detail::serializer<nlohmann::json>::dump(
    const nlohmann::json&, bool, bool, unsigned int, unsigned int);
