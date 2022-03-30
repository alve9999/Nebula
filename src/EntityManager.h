#pragma once
#include "Entity.h"
#include "Tilemap.h"
#include <vector>

class EntityManager
{
public:
    std::vector<Entity*> entities;

    void AddEntity(Entity* entity);
    void RemoveEntity(Entity* entity);
    void HandleCollisions(Tilemap tilemap);
    void Update();
    void Render();
};