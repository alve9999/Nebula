#include "shapes.h"

Rect::Rect() :
    x(0), y(0), width(0), height(0)
{}

Rect::Rect(float x, float y, int width, int height) :
    x(x), y(y), width(width), height(height)
{}

float Rect::top() {
    return this->y;
}
float Rect::bottom() {
    return y+height;
}
float Rect::right() {
    return x+width;
}
float Rect::left() {
    return x;
}

void Rect::set_top(float top) {
    y = top;
}
void Rect::set_bottom(float bottom) {
    y = bottom - height;
}
void Rect::set_right(float right) {
    x = right - width;
}
void Rect::set_left(float left) {
    x = left;
}

bool Rect::Intersects(Rect other) {
    return left() < other.right() && right() > other.left() &&
           top() < other.bottom() && bottom() > other.top();
}

Circle::Circle(int radius,int x, int y)
{
    this->radius = radius;
    this->x = x;
    this->y = y;
}