#ifndef LAYINGGRASS_PLAYERINFO_H
#define LAYINGGRASS_PLAYERINFO_H
#pragma once
#include <vector>
#include <string>
#include "Tile.h"

struct PlayerInfo {
    int playerNumber;
    int spawnZone;
    int spawnX;
    int spawnY;
    std::string name;
    std::vector<Tile> tileQueue;
};

#endif
