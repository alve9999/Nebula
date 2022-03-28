#include "Tilemap.h"
#include "asset_loader.h"
void Tilemap::load_textures(){
    texture_map[0] = load_texture("../sprites/dirt.bmp");
    texture_map[1] = load_texture("../sprites/grass.bmp");
    texture_map[2] = load_texture("../sprites/cobblestone.bmp");
}

Tilemap::Tilemap(int width, int height)
{
    load_textures();
    tile_array.resize(width);
    for (int i = 0; i < width; i++)
    {
        tile_array[i].resize(height);
    }
}