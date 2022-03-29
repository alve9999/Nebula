#include "EntityManager.h"
#include <algorithm>

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