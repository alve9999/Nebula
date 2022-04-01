#include "EntityManager.h"
#include "tiles.h"
#include <algorithm>
#include <iostream>
#include <vector>

void EntityManager::AddEntity(Entity* entity)
{
    entities.emplace_back(entity);
}

void EntityManager::RemoveEntity(Entity* entity)

{
    {
    }
}

std::vector<Rect> EntityManager::GetCollisions(Entity* entity, Tilemap tilemap)
{
    int right = ceil(entity->bounds.right() / tilemap.tile_size);   
    int left = floor(entity->bounds.left() / tilemap.tile_size);
    int top = floor(entity->bounds.top() / tilemap.tile_size);
    int bottom = ceil(entity->bounds.bottom() / tilemap.tile_size);
    
    std::cout << "right: " << right << " left: " << left << " top: " << top << " bottom: " << bottom << std::endl;
    std::vector<Rect> collisions = std::vector<Rect>();
    for (int x = left; x <= right; x++)
    {
        for (int y = top; y <= bottom; y++)
        {   
            if (Tiles[tilemap.tile_array[y][x]].tile_type == TileType::Solid)
            {
                if (entity->bounds.Intersects(tilemap.GetTileBounds(x, y)))
                {
                    entity->OnCollision(tilemap, x, y);
                    collisions.emplace_back(tilemap.GetTileBounds(x, y));
                }
            }
        }
    }
    return collisions;
}

void EntityManager::Update(Tilemap tilemap)
{
    for (Entity* entity : entities)
    {
        entity->position.x += entity->velocity.x;
        entity->bounds.x = entity->position.x;
        std::vector<Rect> collisions;
        if (entity->collision_type == CollisionType::Tiles) {
            collisions = GetCollisions(entity, tilemap);
            entity->ResolveCollisionsX(collisions);
            entity->position.x = entity->bounds.x;
        }
        entity->position.y += entity->velocity.y;
        entity->bounds.y = entity->position.y;
        if (entity->collision_type == CollisionType::Tiles) {
            collisions = GetCollisions(entity, tilemap);
            entity->ResolveCollisionsY(collisions);
            entity->position.y = entity->bounds.y;
        }
        entity->Update();
    }
}

void EntityManager::Render()
{
    for (Entity* entity : entities)
    {
        entity->Render();
    }
}