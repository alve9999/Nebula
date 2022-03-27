#include "shapes.h"

Rect::Rect(int width, int height,int x, int y)
{
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;
}
int Rect::top(){
    return this->y;
}
int Rect::bottom(){
    return y+height;
}
int Rect::right(){
    return x+width;
}
int Rect::left(){
    return x;
}

Circle::Circle(int radius,int x, int y)
{
    this->radius = radius;
    this->x = x;
    this->y = y;
}