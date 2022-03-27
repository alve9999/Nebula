#include "sprite_renderer.h"
#include "game.h"

#include <SDL2/SDL.h>

void render_sprite(Sprite* sprite, glm::vec2 pos)
{
    SDL_Rect* src_rect = new SDL_Rect();
    src_rect->x = sprite->src_rect.x;
    src_rect->y = sprite->src_rect.y;
    src_rect->w = sprite->src_rect.width;
    src_rect->h = sprite->src_rect.height;
    SDL_FRect* dst_rect = new SDL_FRect();
    dst_rect->x = pos.x;
    dst_rect->y = pos.y;
    dst_rect->w = sprite->width;
    dst_rect->h = sprite->height;
    SDL_FPoint* center = new SDL_FPoint();
    center->x = sprite->rotation_point.x;
    center->y = sprite->rotation_point.y;
    SDL_RenderCopyExF(renderer, sprite->texture, src_rect, dst_rect, sprite->angle, center, sprite->flip);
    delete(src_rect);
    delete(dst_rect);
    delete(center);
}