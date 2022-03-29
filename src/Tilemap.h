#pragma once
#include <map>
#include <SDL2/SDL.h>
#include <vector>
#include <glm/glm.hpp>
#include "Sprite.h"

enum class Maps {
    first_map,
    random_map
};

class Tilemap{
public:
    int tile_size;
    std::vector<std::vector<int>> tile_array;

    Tilemap(int map, int tile_size);

    void render();
};