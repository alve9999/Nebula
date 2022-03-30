#pragma once
#include "Entity.h"

class Player : public Entity 
{
public:
    int speed = 1;

    Player();

    void UpdateXPos();
    void UpdateYPos();
    void Update();
};