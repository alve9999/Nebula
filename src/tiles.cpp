#include "sprite_renderer.h"
#include "asset_loader.h"
#include "tiles.h"
void init_tiles()
{
    Tiles.push_back(Tile(nullptr, (int)TileType::None));
    Tiles.push_back(Tile(new Sprite("assets/tiles/dirt.png"), (int)TileType::Solid));
    Tiles.push_back(Tile(new Sprite("assets/tiles/grass.png"), (int)TileType::Solid));
    Tiles.push_back(Tile(new Sprite("assets/tiles/stone.png"), (int)TileType::Solid));
}