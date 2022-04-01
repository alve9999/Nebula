#pragma once
#include <glm/glm.hpp>

struct Rect
{
    float x, y;
    int width, height;
    Rect();
    Rect(float x, float y, int width, int height);
    
    float top();
    float bottom();
    float left();
    float right();
    void set_top(float y);
    void set_bottom(float y);
    void set_left(float x);
    void set_right(float x);
    bool Intersects(Rect other);
};

struct Circle 
{
    int radius,x,y;
    Circle(int radius,int x, int y);
};
