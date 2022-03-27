#include "shapes.h"

Rect::Rect(int width, int height,int x, int y)
{
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;
}

Circle::Circle(int radius,int x, int y)
{
    this->radius = radius;
    this->x = x;
    this->y = y;
}