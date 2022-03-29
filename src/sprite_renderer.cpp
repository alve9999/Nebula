#include "sprite_renderer.h"
#include "game.h"
#include <iostream>
#include <SDL2/SDL.h>

void render_sprite(Sprite* sprite, glm::vec2 pos)
{
    sprite->sdl_dst_rect->x = pos.x;
    sprite->sdl_dst_rect->y = pos.y;
    SDL_RenderCopyExF(renderer, sprite->texture, sprite->sdl_src_rect, sprite->sdl_dst_rect, 
    sprite->angle, sprite->sdl_center, sprite->flip);
}

void render_sprite(Sprite* sprite, Rect dst_rect)
{
    SDL_FRect sdl_dst_rect = { dst_rect.x, dst_rect.y, dst_rect.width, dst_rect.height };
    SDL_RenderCopyExF(renderer, sprite->texture, sprite->sdl_src_rect, &sdl_dst_rect, 
                      sprite->angle, sprite->sdl_center, sprite->flip);
}