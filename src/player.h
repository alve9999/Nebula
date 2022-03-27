#include <glm/glm.hpp>
#include <SDL2/SDL.h>
#include "Entity.h"
#include "Input.h"

class Player : public Entity{
public:
    int speed;
    Player();
    void update();
};