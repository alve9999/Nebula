#pragma once
#include <map>
#include <SDL2/SDL.h>
#include <vector>
#include "Tilemap.h"
#include "asset_loader.h"
#include "tiles.h"

std::vector<std::vector<int>> load_map(int map);
