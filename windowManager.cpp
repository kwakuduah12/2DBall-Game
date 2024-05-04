#include "windowManager.h"
#include <GL/glut.h>  // Include GLUT for window handling
// Constructor

WindowManager::WindowManager(int& argc, char** argv) {
    glutInit(&argc, argv);  // Initialize GLUT with command line arguments
}

WindowManager::~WindowManager() {
    glutDestroyWindow(windowID);  // Destroy the window on cleanup
}

void WindowManager::createWindow(const char* title, int width, int height, int posX, int posY) {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  // Set the display mode
    glutInitWindowSize(width, height);            // Set window size
    glutInitWindowPosition(posX, posY);           // Set window position
    windowID = glutCreateWindow(title);           // Create window with title and store the window ID
}

void WindowManager::setDisplayFunction(void (*displayFunc)()) {
    glutDisplayFunc(displayFunc);  // Set the display callback function
}

void WindowManager::setIdleFunction(void (*idleFunc)()) {
    glutIdleFunc(idleFunc);  // Set the idle callback function
}

void WindowManager::startEventLoop() {
    glutMainLoop();  // Start the GLUT event processing loop
}
