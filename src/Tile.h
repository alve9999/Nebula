#pragma once
#include "tiles.h"
#include "Sprite.h"

class Tile
{
public:
    Sprite* sprite;
    TileType tile_type;

    Tile();
    Tile(Sprite* sprite, TileType tile_type);
};