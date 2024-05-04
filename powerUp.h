#ifndef POWERUP_H
#define POWERUP_H

#include "gameObject.h"  // Include the base class header

class PowerUp : public GameObject {
public:
    enum class Type { SpeedBoost, SizeIncrease, ScoreMultiplier, Invincibility };

    PowerUp(float x, float y, Type type);
    virtual ~PowerUp();

    void activate();  // Activates the power-up effect
    void update(float deltaTime) override;  // Update method for the power-up
    void render() override;  // Render the power-up

    Type getType() const;

private:
    Type type;  // Type of the power-up
};

#endif // POWERUP_H
