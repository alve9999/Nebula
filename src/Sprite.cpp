#include "Sprite.h"
#include "asset_loader.h"
#include <SDL2/SDL.h>

Sprite::Sprite(const char* asset_path, Rect src_rect = Rect(), glm::vec2 rotation_point = glm::vec2(), 
               double angle = 0, SDL_RendererFlip flip = SDL_FLIP_NONE)
{
    texture = load_texture(asset_path);
    this->src_rect = src_rect;
    this->rotation_point = rotation_point;
    this->angle = angle;
    this->flip = flip;
    SDL_QueryTexture(texture, NULL, NULL, &width, &height);
}