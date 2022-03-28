#include "Tilemap.h"
#include "asset_loader.h"
#include "Maps.h"
void Tilemap::load_textures(){
    texture_map[0] = load_texture("../sprites/dirt.bmp");
    texture_map[1] = load_texture("../sprites/grass.bmp");
    texture_map[2] = load_texture("../sprites/cobblestone.bmp");
}

Tilemap::Tilemap(int width, int height)
{
    load_textures();
    tile_array = load_map((int)Maps::first_map);
}

void Tilemap::render(){
    for(int i = 0; i < tile_array.size(); i++){
        for(int j = 0; j < tile_array[i].size(); j++){
            SDL_Rect src_rect = {0,0,32,32};
            SDL_Rect dest_rect = {j*32,i*32,32,32};
            SDL_RenderCopy(renderer,texture_map[tile_array[i][j]],&src_rect,&dest_rect);
        }
    }
}