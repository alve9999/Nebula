#include "tiles.h"
#include "asset_loader.h"
#include "sprite_renderer.h"

Tile Tiles[4];
void init_tiles()
{
    Tiles[Air] = (Tile(nullptr, TileType::None));
    Tiles[Dirt] = (Tile(new Sprite("../sprites/dirt.bmp"), TileType::Solid));
    Tiles[Grass] = (Tile(new Sprite("../sprites/grass.bmp"), TileType::Solid));
    Tiles[Stone] = (Tile(new Sprite("../sprites/stone.bmp"), TileType::Solid));
}