#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL_image.h>

class Entity {
public:
    SDL_Texture* texture;
    glm::vec2 position;
    glm::vec2 velocity;

    virtual void update();
    void render();
    void update_position();
};
