#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include <map>

// InputManager class

class InputManager {
public:
    InputManager();
    ~InputManager();

    static void keyboardDown(unsigned char key, int x, int y); // GLUT keyboard down callback
    static void keyboardUp(unsigned char key, int x, int y);   // GLUT keyboard up callback

    static bool isKeyDown(unsigned char key);  // Check if a specific key is pressed

private:
    static std::map<unsigned char, bool> keyStates; // Keeps track of key states
};
#endif // INPUTMANAGER_H