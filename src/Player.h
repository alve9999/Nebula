#pragma once
#include "Entity.h"

class Player : public Entity 
{
public:
    int speed = 1;

    Player(int width, int height);

    void UpdateXPos();
    void UpdateYPos();
    void Update();
};