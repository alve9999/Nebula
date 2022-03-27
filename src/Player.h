#pragma once
#include "Entity.h"

class Player : public Entity 
{
public:
    int speed;

    Player();

    void update();
};