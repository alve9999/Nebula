#pragma once
#include <glm/glm.hpp>

struct Rect
{
    int x, y, width, height;
    Rect();
    Rect(int x, int y, int width, int height);
    
    int top();
    int bottom();
    int left();
    int right();
    void set_top(int y);
    void set_bottom(int y);
    void set_left(int x);
    void set_right(int x);
};

struct Circle 
{
    int radius,x,y;
    Circle(int radius,int x, int y);
};
