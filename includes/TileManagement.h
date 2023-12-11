#ifndef LAYINGGRASS_TILEMANAGEMENT_H
#define LAYINGGRASS_TILEMANAGEMENT_H
#pragma once
#include "Tile.h"
#include <vector>

class TileManagement {
public:
    TileManagement();
    Tile chooseRandomTile();
    Tile nextTile();

private:
    std::vector<Tile> tile;
    int current_tile;
};

#endif
