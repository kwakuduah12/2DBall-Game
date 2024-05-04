#ifndef PHYSICSMANAGER_H
#define PHYSICSMANAGER_H
#include <box2d/box2d.h>
#include <vector>

class PhysicsManager {
public:
    PhysicsManager();
    ~PhysicsManager();

    void update(float deltaTime); // Updates the physics simulation
    b2Body* createBody(const b2BodyDef& bodyDef); // Creates a new physics body
    void destroyBody(b2Body* body); // Destroys a specified physics body

private:
    b2World* world; // Pointer to the Box2D world
};

#endif // PHYSICSMANAGER_H
