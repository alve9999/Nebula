#pragma once
#include <glm/glm.hpp>

class Entity{
public:
    glm::vec2 position;
    glm::vec2 velocity;
    virtual void update();
    void render();
    void update_position();
};
