#include <glm/glm.hpp>

struct Rect
{
    int width, height,x,y;
    Rect(int width, int height,int x, int y);
    int top();
    int bottom();
    int left();
    int right();
    void set_top(int top);
    void set_bottom(int bottom);
    void set_left(int left);
    void set_right(int right);
};

struct Circle 
{
    int radius,x,y;
    Circle(int radius,int x, int y);
};
