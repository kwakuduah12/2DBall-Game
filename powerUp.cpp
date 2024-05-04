#include "powerUp.h"
#include <GL/glut.h>

PowerUp::PowerUp(float x, float y, Type type) 
    : GameObject(x, y, 1.0f, 1.0f), type(type) {
    // You can set different colors or sizes based on the type
    switch (type) {
    case Type::SpeedBoost:
        setColor(0.5f, 0.8f, 0.5f);
        break;
    case Type::SizeIncrease:
        setColor(0.5f, 0.5f, 0.8f);
        setSize(1.5f, 1.5f);
        break;
    case Type::ScoreMultiplier:
        setColor(0.8f, 0.8f, 0.5f);
        break;
    case Type::Invincibility:
        setColor(0.8f, 0.5f, 0.5f);
        break;
    }
}

PowerUp::~PowerUp() {
    // Cleanup if needed
}

void PowerUp::activate() {
    // Implement what happens when a power-up is activated
    // For example, you can add a new game state to the game manager
    // This might interact with other game systems, e.g., the Player class
}

void PowerUp::update(float deltaTime) {
    // Implement how the power-up behaves over time
}

void PowerUp::render() {
    // Use OpenGL to draw the power-up
    glColor3fv(color);
    glRectf(x, y, x + width, y + height);
}

PowerUp::Type PowerUp::getType() const {
    return type;
}
