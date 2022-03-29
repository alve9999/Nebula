#include "sprite_renderer.h"
#include "asset_loader.h"
#include "tiles.h"
void init_tiles()
{
    Tiles[0] = Tile(nullptr, TileType::None);
    Tiles[1] = Tile(new Sprite("assets/tiles/dirt.png"), TileType::Solid);
    Tiles[2] = Tile(new Sprite("assets/tiles/grass.png"), TileType::Solid);
    Tiles[3] = Tile(new Sprite("assets/tiles/stone.png"), TileType::Solid);
}