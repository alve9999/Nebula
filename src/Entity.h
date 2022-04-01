#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL_image.h>
#include "shapes.h"
#include "Sprite.h"
#include "Tilemap.h"

enum class CollisionType
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
    
    Entity();
    Entity(int width, int height);
    
    virtual void OnCollision(Entity* other);
    virtual void OnCollision(Tilemap tilemap, int x, int y);
    virtual void ResolveCollisionsX(std::vector<Rect> collisions);
    virtual void ResolveCollisionsY(std::vector<Rect> collisions);
    virtual void Update();
    virtual void Render();
};
