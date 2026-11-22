#include <stdio.h>
#include "dexo_texture.h"

DexoTexture load_dexo_texture(const unsigned char* encoded_image, int length);

extern "C" const unsigned char dexo_png[DEXO_PNG_SIZE];
extern "C" unsigned char* stbi_load_from_memory(const unsigned char* buffer, int length,
                                                int* width, int* height, int* channels,
                                                int requested_channels);
extern "C" void stbi_image_free(void* pixels);

DexoTexture load_dexo_embedded_texture()
{
    return load_dexo_texture(dexo_png, sizeof(dexo_png));
}

DexoTexture load_dexo_texture(const unsigned char* encoded_image, int length)
{
    DexoTexture texture;
    auto* pixels = stbi_load_from_memory(encoded_image, length, &texture.width, &texture.height, nullptr, 0);
    if (!pixels) {
        perror(u8"\u6587\u4ef6\u4e0d\u5b58\u5728");
    }
    GLuint id;
    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texture.width, texture.height,
                 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    stbi_image_free(pixels);
    texture.id = id;
    return texture;
}
