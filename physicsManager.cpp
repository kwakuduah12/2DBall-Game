#include "physicsManager.h"

PhysicsManager::PhysicsManager() {
    // Define the gravity vector
    b2Vec2 gravity(0.0f, -9.8f); // Standard earth gravity, negative y indicates 'down'
    world = new b2World(gravity);
}

PhysicsManager::~PhysicsManager() {
    delete world; // Clean up the Box2D world
}

void PhysicsManager::update(float deltaTime) {
    int32 velocityIterations = 8;   // Typically 6-8
    int32 positionIterations = 3;   // Typically 2-3
    world->Step(deltaTime, velocityIterations, positionIterations);
}

b2Body* PhysicsManager::createBody(const b2BodyDef& bodyDef) {
    return world->CreateBody(&bodyDef);
}

void PhysicsManager::destroyBody(b2Body* body) {
    world->DestroyBody(body);
}
