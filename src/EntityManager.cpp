#include "EntityManager.h"
#include "tiles.h"
#include <algorithm>
#include <vector>

void EntityManager::AddEntity(Entity* entity)
{
    entities.emplace_back(entity);
}

void EntityManager::RemoveEntity(Entity* entity)
{
    if (std::find(entities.begin(), entities.end(), entity) != entities.end())
    {
    }
}

void EntityManager::HandleCollisions(Tilemap tilemap)
{
    for (Entity* entity : entities)
    {
        if (entity->collision_type == CollisionType::Tiles)
        {
            int right = ceil(entity->bounds.x + entity->bounds.width);   
            int left = floor(entity->bounds.x);
            int top = floor(entity->bounds.y);
            int bottom = ceil(entity->bounds.y + entity->bounds.height);
            
            std::vector<Rect> collisions = std::vector<Rect>();

            for (int x = left; x < right; x++)
            {
                for (int y = top; y < bottom; y++)
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
        }
    }
}

void EntityManager::Update()
{
    for (int i = 0; i < entities.size(); i++)
    {
        entities[i]->Update();
    }
}

void EntityManager::Render()
{
    for (int i = 0; i < entities.size(); i++)
    {
        entities[i]->Render();
    }
}