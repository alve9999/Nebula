#pragma once
#include <glm/glm.hpp>

class Entity{
public:
    glm::vec2 position;
    glm::vec2 velocity;

    void update();
    void render();
    void update_position();
    void update_velocity(int velocity_x , int velocity_y);
};