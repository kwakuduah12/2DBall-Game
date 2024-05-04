
#ifndef GAME_H
#define GAME_H
class Game {
public:
    Game();  // Constructor
    virtual ~Game(); // Destructor

    void initialize();    // Initializes the game components
    void mainLoop();      // Starts the main game loop
    static void update(); // Updates the game logic (static to fit GLUT callback requirements)
    static void render(); // Renders the game scene (static to fit GLUT callback requirements)

private:
    static void setupOpenGLSettings(); // Configures initial OpenGL settings
    static bool isInitialized; // To ensure that the game initialization happens once
};
#endif // GAME_H