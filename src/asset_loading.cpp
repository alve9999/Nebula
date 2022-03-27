#include "asset_loading.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "game.h"

SDL_Texture* load_texture(const char* asset_path)
{
    SDL_Surface* temp_surface = IMG_Load(asset_path);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, temp_surface);
    SDL_FreeSurface(temp_surface);
    return tex;
}