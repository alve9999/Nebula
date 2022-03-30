#pragma once
#include "asset_loader.h"
#include "tiles.h"
#include "Tilemap.h"
#include <SDL2/SDL.h>
#include <map>
#include <vector>

std::vector<std::vector<int>> load_map(int map);
