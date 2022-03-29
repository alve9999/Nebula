#include "Tilemap.h"
#include "asset_loader.h"
#include "Maps.h"
#include "sprite_renderer.h"
#include <iostream>
void Tilemap::load_textures(){
    texture_map[0] = new Sprite("../sprites/dirt.bmp");
    texture_map[1] = new Sprite("../sprites/grass.bmp");
    texture_map[2] = new Sprite("../sprites/stone.bmp");
    for(int i = 0; i<(int)(sizeof(texture_map)/sizeof(texture_map[0])); i++){
        texture_map[i]->change_dimensions(32);
    }
}

Tilemap::Tilemap(int map)
{
    load_textures();
    tile_array = load_map(map);
}

void Tilemap::render(){
    for(int i = 0; i < tile_array.size(); i++){
        for(int j = 0; j < tile_array[i].size(); j++){
            glm::vec2 pos = glm::vec2(j*32,i*32);
            render_sprite(texture_map[tile_array[i][j]], pos);
        }
    }
}