#ifndef RECOVERED_KENTOS_DEXO_TEXTURE_H
#define RECOVERED_KENTOS_DEXO_TEXTURE_H

#include <GLES3/gl3.h>
#include <cstddef>
#include <cstdint>

struct DexoTexture {
    std::uint64_t id;
    std::uint64_t : 64;
    int width;
    int height;
};

static_assert(sizeof(DexoTexture) == 24, "Unexpected texture result size");
static_assert(offsetof(DexoTexture, width) == 16, "Unexpected width offset");
static_assert(offsetof(DexoTexture, height) == 20, "Unexpected height offset");

/* Requires a current GLES3 context. The caller owns the returned texture. */
DexoTexture load_dexo_embedded_texture();

#endif
