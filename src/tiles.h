#pragma once
#include <vector>
#include "Tile.h"

enum class TileType {
    None,
    Solid,
    OneWay
};

const int Air = 0;
const int Dirt = 1;
const int Grass = 2;
const int Stone = 3;

const Tile Tiles[];

void init_tiles();
