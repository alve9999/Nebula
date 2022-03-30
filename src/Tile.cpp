#include "Tile.h"

Tile::Tile()
{
    sprite = nullptr;
    tile_type = TileType::None;   
}

Tile::Tile(Sprite* sprite, TileType tile_type)
{
    this->sprite = sprite;
    this->tile_type = tile_type;
}