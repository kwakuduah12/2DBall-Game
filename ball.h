#include <GL/gl.h> // Include the appropriate header file
#ifndef BALL_H
#define BALL_H
class GameObject {
public:
    GameObject(float x = 0.0f, float y = 0.0f, float width = 1.0f, float height = 1.0f)
        : x(x), y(y), width(width), height(height) {
        // Initialize color to white by default
        color[0] = 1.0f;
        color[1] = 1.0f;
        color[2] = 1.0f;
    }



    virtual ~GameObject() {}

    virtual void update(float deltaTime) {}
    virtual void render() {
        glColor3fv(color); // Set the color of the object
        glRectf(x, y, x + width, y + height); // Draw the rectangle
    }

    // Getters and setters for position, size, and color
    void setPosition(float newX, float newY) { x = newX; y = newY; }
    void setSize(float newWidth, float newHeight) { width = newWidth; height = newHeight; }
    void setColor(float r, float g, float b) { color[0] = r; color[1] = g; color[2] = b; }

protected:
    float x, y;     // Position of the object
    float width, height; // Size of the object
    float color[3]; // Color of the object
};
#endif // BALL_H