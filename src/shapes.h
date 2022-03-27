#include <glm/glm.hpp>

struct Rect
{
    int width, height;
    glm::vec2 pos;
    Rect(int width, int height,glm::vec2 pos);
};

struct Circle 
{
    int radius;
    glm::vec2 pos;
    Circle(int radius,glm::vec2 pos);
};
