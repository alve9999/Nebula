#pragma once
#include <map>
#include <SDL2/SDL.h>
#include <vector>

enum class Tiles {
        Dirt,
        Grass,
        Cobblestone
};

enum class Maps {
    first_map
};

class Tilemap{
public:
    void load_textures();
    std::vector<std::vector<int>> tile_array;
    Tilemap(int x,int y);

    void render();
    std::map<int,SDL_Texture*> texture_map;
};