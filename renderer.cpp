#include "renderer.h"
#include <GL/glut.h>

Renderer::Renderer() {
    initialize();
}

Renderer::~Renderer() {
    // Cleanup if necessary
}

void Renderer::initialize() {
    setupOpenGLSettings();
}

void Renderer::setupOpenGLSettings() {
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    // Set other OpenGL settings like depth test, culling, etc., as needed
}

void Renderer::beginDraw() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen and depth buffer
}

void Renderer::endDraw() {
    glutSwapBuffers(); // Swap the front and back buffers
}

void Renderer::drawRectangle(float x, float y, float width, float height, const float* color) {
    glColor3fv(color); // Set the color for the rectangle
    glBegin(GL_QUADS); // Start drawing a quad
        glVertex2f(x, y);
        glVertex2f(x + width, y);
        glVertex2f(x + width, y + height);
        glVertex2f(x, y + height);
    glEnd(); // End drawing the quad
}
