#include "levelManager.h"
#include <iostream> // For debugging output, etc.

LevelManager::LevelManager() : currentLevelIndex(-1) {}

LevelManager::~LevelManager() {
    unloadLevel();
}

void LevelManager::loadLevel(const std::string& levelFile) {
    // Simulate loading a level (You would normally read from a file)
    loadedLevels.push_back(levelFile);
    currentLevelIndex = loadedLevels.size() - 1;
    std::cout << "Loaded level: " << levelFile << std::endl;
}

void LevelManager::unloadLevel() {
    if (currentLevelIndex != -1) {
        std::cout << "Unloading level: " << loadedLevels[currentLevelIndex] << std::endl;
        loadedLevels.pop_back();
        currentLevelIndex = loadedLevels.empty() ? -1 : loadedLevels.size() - 1;
    }
}

void LevelManager::switchToLevel(const std::string& levelFile) {
    unloadLevel();
    loadLevel(levelFile);
}

void LevelManager::update(float deltaTime) {
    // Update the current level's game objects, etc.
    std::cout << "Updating level: " << loadedLevels[currentLevelIndex] << std::endl;
}

void LevelManager::render() {
    // Render the current level's game objects, etc.
    std::cout << "Rendering level: " << loadedLevels[currentLevelIndex] << std::endl;
}
