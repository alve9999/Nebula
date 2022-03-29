#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL_image.h>
#include "EntityManager.h"
#include "Sprite.h"
#include "shapes.h"

enum CollisionType
{
    None,
    Tiles,
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

    Entity(EntityManager creator);

    virtual void OnCollision(Entity* other);
    virtual void Update();
    virtual void Render();
};
