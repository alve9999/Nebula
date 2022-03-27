#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL_image.h>
#include "Sprite.h"

class Entity {
public:
    Sprite* sprite;
    glm::vec2 position;
    glm::vec2 velocity;

    Entity();

    virtual void Update();
    void Render();
    void UpdatePosition();
};
