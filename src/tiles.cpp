#include "sprite_renderer.h"
#include "asset_loader.h"
#include "tiles.h"

extern Tile Tiles[4] = {};
void init_tiles()
{
    Tiles[0] = (Tile(nullptr, (int)TileType::None));
    Tiles[1] = (Tile(new Sprite("assets/tiles/dirt.bmp"), (int)TileType::Solid));
    Tiles[2] = (Tile(new Sprite("assets/tiles/grass.bmp"), (int)TileType::Solid));
    Tiles[3] = (Tile(new Sprite("assets/tiles/stone.bmp"), (int)TileType::Solid));
}