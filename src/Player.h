#include <SDL2/SDL.h>
#include <glm/glm.hpp>
#include "Entity.h"
#include "Input.h"

class Player : public Entity 
{
public:
    int speed;

    Player();

    void update();
};