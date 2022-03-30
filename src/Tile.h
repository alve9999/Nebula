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
    TileType tile_type;

    Tile();
    Tile(Sprite* sprite, TileType tile_type);
};