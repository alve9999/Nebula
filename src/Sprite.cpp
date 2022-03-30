#include "Sprite.h"
#include "asset_loader.h"
#include <SDL2/SDL.h>

void Sprite::change_dimensions(int width, int height) {
    sdl_dst_rect->w = width;
    sdl_dst_rect->h = height;
}
void Sprite::change_dimensions(int size) {
    sdl_dst_rect->w = size;
    sdl_dst_rect->h = size;
}

Sprite::Sprite(const char* asset_path, glm::vec2 rotation_point, double angle, SDL_RendererFlip flip)
{
    texture = load_texture(asset_path);
    this->rotation_point = rotation_point;
    this->angle = angle;
    this->flip = flip;
    SDL_QueryTexture(texture, NULL, NULL, &width, &height);
    src_rect = Rect(0, 0, width, height);

    sdl_src_rect = new SDL_Rect();
    sdl_dst_rect = new SDL_FRect();
    sdl_center = new SDL_FPoint();
    sdl_src_rect->x = src_rect.x;
    sdl_src_rect->y = src_rect.y;
    sdl_src_rect->w = src_rect.width;
    sdl_src_rect->h = src_rect.height;
    sdl_dst_rect->x = 0;
    sdl_dst_rect->y = 0;
    sdl_dst_rect->w = width;
    sdl_dst_rect->h = height;
    sdl_center->x = rotation_point.x;
    sdl_center->y = rotation_point.y;
}