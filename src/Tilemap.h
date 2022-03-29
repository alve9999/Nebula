#pragma once
#include <map>
#include <SDL2/SDL.h>
#include <vector>
#include <glm/glm.hpp>
#include "Sprite.h"

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
    std::vector<std::vector<int>> tile_array;
    Tilemap(int map);

    void load_textures();
    void render();
    Sprite* texture_map[3];
    Sprite* dirt;
};