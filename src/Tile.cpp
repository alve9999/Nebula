#include "Tile.h"

Tile::Tile()
{
    sprite = nullptr;
    tile_type = (int)TileType::None;   
}

Tile::Tile(Sprite* sprite, int tile_type)
{
    this->sprite = sprite;
    this->tile_type = tile_type;
}