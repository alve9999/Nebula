#pragma once
#include "Sprite.h"
#include "shapes.h"
#include <map>
#include <vector>
#include <SDL2/SDL.h>
#include <glm/glm.hpp>

enum class Maps {
    first_map,
    random_map
};

class Tilemap
{
public:
    int tile_size;
    std::vector<std::vector<int>> tile_array;

    Tilemap(int map, int tile_size);

    Rect GetTileBounds(int x, int y);
    void Render();
};