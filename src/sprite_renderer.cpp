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

void render_sprite(Sprite* sprite, glm::vec2 pos, int width, int height)
{
    SDL_FRect sdl_dst_rect = { pos.x, pos.y, (float)width, (float)height };
    SDL_RenderCopyExF(renderer, sprite->texture, sprite->sdl_src_rect, &sdl_dst_rect, 
                      sprite->angle, sprite->sdl_center, sprite->flip);
}