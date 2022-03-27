#include <SDL2/SDL.h>
#include <glm/glm.hpp>
#include "shapes.h"

class Sprite
{
public:
    SDL_Texture* texture;
    Rect src_rect;
    int width, height;
    glm::vec2 rotation_point;
    double angle;
    SDL_RendererFlip flip;

    Sprite(const char* asset_path, Rect src_rect, glm::vec2 rotation_point, double angle, SDL_RendererFlip flip);
};