#include "Tilemap.h"
#include "asset_loader.h"
#include "maps.h"
#include "sprite_renderer.h"
#include "tiles.h"

Tilemap::Tilemap(int map, int tile_size)
{
    tile_array = load_map(map);
}

Rect Tilemap::GetTileBounds(int x, int y)
{
    return Rect(x * tile_size, y * tile_size, tile_size, tile_size);
}

void Tilemap::Render() {
    for(int i = 0; i < tile_array.size(); i++) {
        for(int j = 0; j < tile_array[i].size(); j++) {
            int tile_id = tile_array[i][j];
            if(tile_id != 0) {
                glm::vec2 pos = glm::vec2(j * tile_size, i * tile_size);
                render_sprite(Tiles[tile_id].sprite, glm::vec2(pos.x, pos.y));
            }
        }
    }
}