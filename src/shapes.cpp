#include "shapes.h"

Rect::Rect() :
    x(0), y(0), width(0), height(0)
{}

Rect::Rect(int x, int y, int width, int height) :
    x(x), y(y), width(width), height(height)
{}

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