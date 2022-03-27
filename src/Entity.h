#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL_image.h>

class Entity {
public:
    glm::vec2 position;
    glm::vec2 velocity;
    SDL_Texture* texture;

    virtual void update();
    void render();
    void update_position();
};
