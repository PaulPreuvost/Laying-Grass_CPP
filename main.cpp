#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "includes/Tile.h"
#include "includes/TileManagement.h"
#include "includes/PlayerInfo.h"
#include "includes/GameFunctions.h"

std::vector<PlayerInfo> players;
int size_board = 20;
int number_of_players = 0;
std::vector<std::vector<int>> board;
int currentPlayer = 0;
int max_turn = 9;

void initializePlayers() {
    std::vector<int> player_order(number_of_players);
    for (int i = 0; i < number_of_players; ++i) {
        player_order[i] = i;
    }

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(player_order.begin(), player_order.end(), g);

    for (int i = 0; i < number_of_players; ++i) {
        int current_player = player_order[i];
        std::cout << "Le joueur actuel est : " << current_player + 1 << std::endl;
        askSpawnPoint(current_player + 1);
    }
}

void assignTilesToPlayers(TileManagement &p_tile_management) {
    for (auto &player: players) {
        for (int i = 0; i < 10; ++i) {
            player.tileQueue.push_back(p_tile_management.nextTile());
        }
    }
};

int main() {
    TileManagement tile_management;
    number_of_players = askNumberOfPlayers();
    size_board = setSizeBoard(number_of_players);
    board = fillBoard(size_board, number_of_players);
    displayBoard(board, size_board);
    initializePlayers();
    assignTilesToPlayers(tile_management);

    int turnCount = 1;
    while (turnCount <= (max_turn * number_of_players)) {
        clear();
        displayBoard(board, size_board);
        std::cout << "Tour " << (turnCount - 1) / number_of_players + 1 << " - Joueur actuel : " << currentPlayer + 1 << std::endl;
        Tile currentTile = players[currentPlayer].tileQueue.front();
        std::cout << "Tuile actuelle :" << std::endl;
        currentTile.displayTile();
        int playerChoice;
        std::cout << "1. Placer la tuile\n2. Tourner la tuile\n3. Inverser la tuile\n4. Passer le tour\n5. Afficher la file d'attente des tuiles\nEntrez votre choix : ";
        std::cin >> playerChoice;
        switch (playerChoice) {
            case 1: {
                int x, y;
                std::cout << "Entrez les coordonnées (Y X) pour placer la tuile : ";
                std::cin >> x >> y;
                if (placeTileOnBoard(currentTile, x - 1, y - 1, currentPlayer + 1, board)) {
                    players[currentPlayer].tileQueue.erase(players[currentPlayer].tileQueue.begin());
                    turnCount++;
                    switchPlayerTurn(currentPlayer);
                }
                break;
            }
            case 2: {
                currentTile.turnTile();
                players[currentPlayer].tileQueue.front() = currentTile;
                break;
            }
            case 3: {
                char flipDirection;
                std::cout << "Entrez la direction de retournement (H pour horizontal, V pour vertical) : ";
                std::cin >> flipDirection;
                currentTile.inverseTile(flipDirection);
                players[currentPlayer].tileQueue.front() = currentTile;
                break;
            }
            case 4: {
                turnCount++;
                switchPlayerTurn(currentPlayer);
                break;
            }
            case 5: {
                std::cout << "File d'attente des tuiles du joueur " << currentPlayer + 1 << " :" << std::endl;
                for (const auto &tile : players[currentPlayer].tileQueue) {
                    tile.displayTile();
                    std::cout << "------------" << std::endl;
                }
                std::cout << std::endl;
                break;
            }
        }
    }
    clear();
    displayBoard(board, size_board);
    victoryCondition(board, number_of_players, size_board);
    return 0;

}