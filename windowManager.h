#include <GL/glut.h>  // Include GLUT for window handling

class WindowManager {
public:
    WindowManager(int& argc, char** argv);  // Constructor initializes the window
    ~WindowManager();  // Destructor

    void createWindow(const char* title, int width, int height, int posX, int posY);
    void setDisplayFunction(void (*displayFunc)());
    void setIdleFunction(void (*idleFunc)());
    void startEventLoop();

private:
    int windowID;  // Store the window ID for operations like close, etc.
};

