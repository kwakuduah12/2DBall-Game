#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
class GameObject {
public:
    GameObject(float x = 0.0f, float y = 0.0f, float width = 1.0f, float height = 1.0f);
    virtual ~GameObject();

    virtual void update(float deltaTime); // Update the object's state
    virtual void render();               // Render the object using OpenGL

    void setPosition(float x, float y);
    void setSize(float width, float height);
    void getColor(float& r, float& g, float& b) const;
    void setColor(float r, float g, float b);

protected:
    float x, y;     // Position of the object
    float width, height; // Size of the object
    float color[3]; // Color of the object in RGB
};


#endif // GAMEOBJECT_H