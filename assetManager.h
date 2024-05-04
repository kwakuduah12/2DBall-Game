#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <map>
#include <string>
#include <memory>
#include "stb_image.h"  // For image loading functionality

class AssetManager {
public:
    AssetManager();
    ~AssetManager();

    void loadTexture(const std::string& name, const std::string& filename);
    unsigned int getTexture(const std::string& name);

private:
    std::map<std::string, unsigned int> textures; // Stores textures by name
    void loadFromFile(const std::string& filename, unsigned int& textureId);
};

#endif // ASSETMANAGER_H
