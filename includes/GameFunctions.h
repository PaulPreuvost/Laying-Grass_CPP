#ifndef LAYINGGRASS_GAMEFUNCTIONS_H
#define LAYINGGRASS_GAMEFUNCTIONS_H

#pragma once
#include <vector>
#include "Tile.h"
#include "PlayerInfo.h"

extern int number_of_players;
extern int size_board;
extern std::vector<std::vector<int>> board;
extern std::vector<PlayerInfo> players;

int askNumberOfPlayers();
int setSizeBoard(int p_number_of_players);
std::vector<std::vector<int>> fillBoard(int p_size_board, int p_number_of_players);
void clear();
void displayBoard(const std::vector<std::vector<int>>& p_board, int p_size_board);
int findSpawnZone(int spawnX, int spawnY);
bool isZoneOccupied(int spawnZone);
int askSpawnPoint(int playerNumber);
bool isTilePlacementValid(const Tile& tile, int x, int y, const std::vector<std::vector<int>>& board);
bool placeTileOnBoard(const Tile& tile, int x, int y, int playerNumber, std::vector<std::vector<int>>& board);
void switchPlayerTurn(int& currentPlayer);
int findSquareSize(const std::vector<std::vector<int>>& p_board, int p_player_number, int p_start_X, int p_start_Y, int p_size);
void victoryCondition(const std::vector<std::vector<int>>& p_board, int p_number_of_players, int p_size_board);
#endif
