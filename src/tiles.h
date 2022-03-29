#pragma once
#include <vector>
#include "Tile.h"


const int Air = 0;
const int Dirt = 1;
const int Grass = 2;
const int Stone = 3;

extern std::vector<Tile> Tiles;

void init_tiles();
