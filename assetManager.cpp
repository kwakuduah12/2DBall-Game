#include "assetManager.h"
#include <GL/glut.h>
#include <iostream>

AssetManager::AssetManager() {}

AssetManager::~AssetManager() {
    // Clean up all textures
    for (auto& tex : textures) {
        glDeleteTextures(1, &tex.second);
    }
}

void AssetManager::loadTexture(const std::string& name, const std::string& filename) {
    unsigned int textureId = 0;
    loadFromFile(filename, textureId);
    textures[name] = textureId;
}

unsigned int AssetManager::getTexture(const std::string& name) {
    if (textures.find(name) != textures.end()) {
        return textures[name];
    } else {
        std::cout << "Texture not found: " << name << std::endl;
        return 0; // Return an invalid texture ID
    }
}

void AssetManager::loadFromFile(const std::string& filename, unsigned int& textureId) {
    int width, height, nrChannels;
    unsigned char* data = stbi_load(filename.c_str(), &width, &height, &nrChannels, 0);
    if (data) {
        glGenTextures(1, &textureId);
        glBindTexture(GL_TEXTURE_2D, textureId);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        stbi_image_free(data);
    } else {
        std::cout << "Failed to load texture: " << filename << std::endl;
    }
}
