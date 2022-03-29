#include "asset_loader.h"
#include "game.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

SDL_Texture* load_texture(const char* asset_path)
{
    SDL_Surface* temp_surface = SDL_LoadBMP(asset_path);
    if (temp_surface == NULL)
    {
        std::cout << "Error loading texture: " << SDL_GetError() << std::endl;
        return NULL;
    }
    SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, temp_surface);
    SDL_FreeSurface(temp_surface);
    return tex;
}