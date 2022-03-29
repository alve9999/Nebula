#include "Tilemap.h"
#include "asset_loader.h"
#include "Maps.h"
#include "sprite_renderer.h"
#include <iostream>
void Tilemap::load_textures(){
    texture_map[0] = new Sprite("../sprites/dirt.bmp");
    texture_map[1] = new Sprite("../sprites/grass.bmp");
    texture_map[2] = new Sprite("../sprites/stone.bmp");
}

Tilemap::Tilemap(int map)
{
    load_textures();
    tile_array = load_map(map);
}

void Tilemap::render(){
    for(int i = 0; i < tile_array.size(); i++){
        for(int j = 0; j < tile_array[i].size(); j++){
            glm::vec2 pos = glm::vec2(i*32,j*32);
            if (tile_array[i][j] == (int)Tiles::Dirt)
            {
                render_sprite(dirt, pos);
            }
        }
    }
}