#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL_image.h>
#include "Sprite.h"
#include "shapes.h"

enum CollisionType
{
    None,
    Tiless,
    Entities,
    All
};

class Entity {
public:
    Sprite* sprite;
    glm::vec2 position;
    glm::vec2 velocity;
    Rect bounds;
    CollisionType collision_type;
    Entity();
    //Entity(EntityManager creator);
    void UpdatePosition();
    virtual void OnCollision(Entity* other);
    virtual void Update();
    virtual void Render();
};
