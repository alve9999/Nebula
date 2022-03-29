#include "tiles.h"

void init_tiles()
{
    Tiles = {
        Tile(nullptr, TileType::None),
        Tile(load_sprite("assets/tiles/dirt.png"), TileType::Solid),
        Tile(load_sprite("assets/tiles/grass.png"), TileType::Solid),
        Tile(load_sprite("assets/tiles/stone.png"), TileType::Solid),
    };
}