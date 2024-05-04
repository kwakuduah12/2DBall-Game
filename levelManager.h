#ifndef LEVELMANAGER_H
#define LEVELMANAGER_H

#include <string>
#include <vector>

class LevelManager {
public:
    LevelManager();
    ~LevelManager();

    void loadLevel(const std::string& levelFile); // Load level data from a file
    void unloadLevel(); // Unload the current level
    void switchToLevel(const std::string& levelFile); // Switches directly to another level
    void update(float deltaTime); // Update function for the level
    void render(); // Render the level

private:
    std::vector<std::string> loadedLevels; // Tracks all loaded level data
    int currentLevelIndex; // Index of the currently active level
};

#endif // LEVELMANAGER_H
