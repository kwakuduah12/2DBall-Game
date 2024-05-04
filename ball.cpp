#include <GL/glut.h>
#include "ball.h"


class Ball : public GameObject {
public:
    Ball(float x, float y, float diameter)
        : GameObject(x, y, diameter, diameter), vx(0.0f), vy(0.0f) {
    }

    void setVelocity(float vx, float vy) { this->vx = vx; this->vy = vy; }
    void update(float deltaTime) override {
        x += vx * deltaTime; // Update position based on velocity and delta time
        y += vy * deltaTime;
        checkBounds(); // Check and handle bounds of the window
    }

private:
    float vx, vy; // Velocity of the ball

    void checkBounds() {
        // Prevent the ball from moving outside the window
        if (x < 0 || x + width > glutGet(GLUT_WINDOW_WIDTH)) vx = -vx;
        if (y < 0 || y + height > glutGet(GLUT_WINDOW_HEIGHT)) vy = -vy;
    }
};
