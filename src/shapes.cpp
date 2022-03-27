#include "shapes.h"

Rect::Rect(int width, int height,glm::vec2 pos)
{
    this->width = width;
    this->height = height;
    this->pos = pos;
}

Circle::Circle(int radius,glm::vec2 pos)
{
    this->radius = radius;
    this->pos = pos;
}