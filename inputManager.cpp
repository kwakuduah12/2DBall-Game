#include <map>
#include <GL/glut.h>
#include "inputManager.h"

std::map<unsigned char, bool> InputManager::keyStates; // Initialize static member

InputManager::InputManager() {
    // Register the callbacks
    glutKeyboardFunc(InputManager::keyboardDown);
    glutKeyboardUpFunc(InputManager::keyboardUp);
}

InputManager::~InputManager() {
    // Cleanup if necessary
}

void InputManager::keyboardDown(unsigned char key, int x, int y) {
    keyStates[key] = true;  // Set the key state to pressed
}

void InputManager::keyboardUp(unsigned char key, int x, int y) {
    keyStates[key] = false; // Set the key state to released
}

bool InputManager::isKeyDown(unsigned char key) {
    return keyStates.find(key) != keyStates.end() && keyStates[key];
}
