#include "dexo_skin_config.h"

#include <cctype>
#include <cstdlib>
#include <fstream>
#include <map>
#include <string>

#if defined(_MSC_VER)
#define DEXO_PUBLIC
#else
#define DEXO_PUBLIC __attribute__((visibility("default")))
#endif

namespace {

std::map<std::string, int> g_values;

std::string trim(const std::string& text)
{
    size_t begin = 0;
    size_t end = text.size();
    while (begin < end && std::isspace(static_cast<unsigned char>(text[begin]))) {
        ++begin;
    }
    while (end > begin && std::isspace(static_cast<unsigned char>(text[end - 1]))) {
        --end;
    }
    return text.substr(begin, end - begin);
}

std::string lowercase(const std::string& text)
{
    std::string result = text;
    for (char& character : result) {
        character = static_cast<char>(
            std::tolower(static_cast<unsigned char>(character)));
    }
    return result;
}

}  // namespace

bool dexo_skin_config_load(const char* path)
{
    if (path == nullptr) {
        return false;
    }
    std::ifstream input(path);
    if (!input) {
        return false;
    }
    std::string line;
    while (std::getline(input, line)) {
        line = trim(line);
        if (line.empty() || line[0] == ';' || line[0] == '#' || line[0] == '[') {
            continue;
        }
        const size_t separator = line.find('=');
        if (separator == std::string::npos) {
            continue;
        }
        const std::string key = lowercase(trim(line.substr(0, separator)));
        const std::string value = trim(line.substr(separator + 1));
        if (key.empty() || value.empty()) {
            continue;
        }
        char* end = nullptr;
        const long number = std::strtol(value.c_str(), &end, 0);
        if (end == value.c_str()) {
            continue;
        }
        g_values[key] = static_cast<int>(number);
    }
    return true;
}

int dexo_skin_config_get(const char* key, int fallback)
{
    if (key == nullptr) {
        return fallback;
    }
    auto found = g_values.find(lowercase(key));
    return found != g_values.end() ? found->second : fallback;
}

void dexo_skin_config_apply(DexoSkinConfig& skin)
{
    skin.outfit = dexo_skin_config_get(
        "lua_outfit_res", dexo_skin_config_get("outfit_res", skin.outfit));
    skin.bag = dexo_skin_config_get(
        "lua_bag_res", dexo_skin_config_get("bag_res", skin.bag));
    skin.helmet = dexo_skin_config_get(
        "lua_helmet_res", dexo_skin_config_get("helmet_res", skin.helmet));
    skin.vehicle = dexo_skin_config_get(
        "lua_vehicle_res", dexo_skin_config_get("vehicle_res", skin.vehicle));
    skin.deadbox_id = dexo_skin_config_get(
        "lua_deadbox_res", dexo_skin_config_get("deadbox_res", skin.deadbox_id));
}

extern "C" DEXO_PUBLIC int dexo_skin_config_load_file(const char* path)
{
    return dexo_skin_config_load(path) ? 1 : 0;
}

extern "C" DEXO_PUBLIC int dexo_skin_config_value(const char* key, int fallback)
{
    return dexo_skin_config_get(key, fallback);
}
