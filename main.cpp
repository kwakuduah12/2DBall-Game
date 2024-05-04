#include <GL/glut.h>
#include "game.h"
#include "windowManager.h"
#include "inputManager.h"
#include "renderer.h"
#include "levelManager.h"
#include "physicsManager.h"
#include "soundManager.h"
#include "assetManager.h"

// Create instances of the game systems
WindowManager windowManager;
InputManager inputManager;
Renderer renderer;
LevelManager levelManager;
PhysicsManager physicsManager;
SoundManager soundManager;
AssetManager assetManager;

void update() {
    float deltaTime = 0.016; // Assume a fixed time step for simplicity
    levelManager.update(deltaTime);
    physicsManager.update(deltaTime);
}

void render() {
    renderer.beginDraw();
    levelManager.render();
    renderer.endDraw();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    windowManager.createWindow("My 2D Game", 800, 600, 100, 100);
    renderer.initialize();

    // Load initial resources
    assetManager.loadTexture("player", "path/to/player/texture.png");
    soundManager.loadSoundEffect("jump", "path/to/jump/sound.wav");
    
    // Set up the game environment
    levelManager.loadLevel("path/to/initial/level.dat");

    // Register GLUT callbacks
    glutDisplayFunc(render);
    glutIdleFunc(update);

    // Enter the main loop
    windowManager.startEventLoop();

    return 0;
}
