#include <GL/glut.h>
#include "gameObject.h"

GameObject::GameObject(float x, float y, float width, float height)
    : x(x), y(y), width(width), height(height) {
    // Default color is white
    color[0] = 1.0f;
    color[1] = 1.0f;
    color[2] = 1.0f;
}
GameObject::~GameObject() {
    // Destructor
}

void GameObject::update(float deltaTime) {
    // Basic update logic (can be overridden in derived classes)
}

void GameObject::render() {
    glColor3fv(color); // Set the color for the object
    glRectf(x, y, x + width, y + height); // Draw the rectangle representing the object
}

void GameObject::setPosition(float newX, float newY) {
    x = newX;
    y = newY;
}

void GameObject::setSize(float newWidth, float newHeight) {
    width = newWidth;
    height = newHeight;
}

void GameObject::getColor(float& r, float& g, float& b) const {
    r = color[0];
    g = color[1];
    b = color[2];
}

void GameObject::setColor(float r, float g, float b) {
    color[0] = r;
    color[1] = g;
    color[2] = b;
}
