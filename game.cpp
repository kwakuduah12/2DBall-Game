#include <GL/glut.h> // Include the GLUT library for windowing and rendering
#include "Game.h"
#include "InputManager.h"

bool Game::isInitialized = false; // Define and initialize the static member

Game::Game() {
    // Constructor implementation can be empty if no specific action is needed at construction
}

Game::~Game() {
    // Destructor implementation can be empty if no specific clean-up is needed
}

void Game::initialize() {
    if (!isInitialized) {
        setupOpenGLSettings();
        // Additional initialization like loading assets, setting up the level, etc.
        isInitialized = true;
    }
}

void Game::setupOpenGLSettings() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set clear color to black
}

void Game::mainLoop() {
    glutMainLoop(); // Enter the GLUT event processing loop
}

void Game::update() {
    if (InputManager::isKeyDown('w')) 
    {
    // Move player or camera up
    }
    if (InputManager::isKeyDown('s')) 
    {
    // Move player or camera down
    }
    // Update game logic, such as moving the ball, checking collisions, etc.
}

void Game::render() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen with the clear color

    // Render game objects here

    glFlush(); // Finish rendering
}

// GLUT display function
void displayCallback() {
    Game::render();
}

// GLUT idle function
void idleCallback() {
    Game::update();
    glutPostRedisplay(); // Mark the current window as needing to be redisplayed
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                            // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);      // Set the display mode
    glutInitWindowSize(800, 600);                     // Set window size
    glutInitWindowPosition(100, 100);                 // Set window position
    glutCreateWindow("2D Ball Game");                 // Create window with title

    Game game;
    game.initialize();                                // Initialize the game

    glutDisplayFunc(displayCallback);                 // Set display callback
    glutIdleFunc(idleCallback);                       // Set idle callback

    game.mainLoop();                                  // Start the game loop

    return 0;
}
