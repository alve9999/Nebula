#pragma once
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

    SDL_Rect* sdl_src_rect;
    SDL_FRect* sdl_dst_rect;
    SDL_FPoint* sdl_center;
    void change_dimensions(int width, int height);
    void change_dimensions(int size);
    Sprite(const char* asset_path, glm::vec2 rotation_point = glm::vec2(), 
           double angle = 0, SDL_RendererFlip flip = SDL_FLIP_NONE);
};