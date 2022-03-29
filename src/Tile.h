#pragma once
#include "Sprite.h"
enum class TileType {
    None,
    Solid,
    OneWay
};

class Tile
{
public:
    Sprite* sprite;
    int tile_type;

    Tile();
    Tile(Sprite* sprite, int tile_type);
};