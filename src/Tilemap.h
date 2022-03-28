#pragma once
#include <map>
#include <SDL2/SDL.h>
#include <vector>

class Tilemap{
public:
    void load_textures();
    std::vector<std::vector<int>> tile_array;
    Tilemap(int x,int y);
    
    void render();
    enum class Tiles {
        Dirt,
        Grass,
        Cobblestone
    };
    std::map<int,SDL_Texture*> texture_map;
};