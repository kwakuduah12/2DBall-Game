#ifndef RENDERER_H
#define RENDERER_H

class Renderer {
public:
    Renderer();
    ~Renderer();

    void initialize(); // Set up necessary rendering settings
    void beginDraw();  // Prepare to render a new frame
    void endDraw();    // Finish rendering the frame
    void drawRectangle(float x, float y, float width, float height, const float* color); // Draw a rectangle

private:
    void setupOpenGLSettings(); // Configures initial OpenGL settings
};

#endif // RENDERER_H
