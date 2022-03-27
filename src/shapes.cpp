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
void Rect::set_top(int top){
    y = top;
}
void Rect::set_bottom(int bottom){
    height = bottom-y;
}
void Rect::set_right(int right){
    width = right-x;
}
void Rect::set_left(int left){
    x = left;
}

Circle::Circle(int radius,int x, int y)
{
    this->radius = radius;
    this->x = x;
    this->y = y;
}