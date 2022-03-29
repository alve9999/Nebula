#include <vector>
#include "Entity.h"

class EntityManager
{
public:
    std::vector<Entity*> entities;

    void AddEntity(Entity* entity);
    void RemoveEntity(Entity* entity);
    void Update();
    void Render();
};