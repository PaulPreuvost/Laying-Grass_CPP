#include <iostream>
#include <iomanip>
#include <map>
#include <stack>
#include "GameFunctions.h"
#include "Tile.h"
#include "PlayerInfo.h"

int askNumberOfPlayers() {
    std::string user_verification;
    std::cout << "Combien de joueurs voulez-vous ? " << std::endl;
    std::cin >> number_of_players;
    std::cout << "Vous-voulez " << number_of_players << " joueurs (y/n)?" << std::endl;
    std::cin >> user_verification;
    if ((user_verification == "y" || user_verification == "Y") && (number_of_players > 1) && (number_of_players < 10)) {
        return number_of_players;
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
        return askNumberOfPlayers();
    }
}

int setSizeBoard(int p_number_of_players) {
    return (p_number_of_players < 5) ? 20 : 30;
}

std::vector<std::vector<int>> fillBoard(int p_size_board, int p_number_of_players) {
    std::vector<std::vector<int>> new_board(p_size_board, std::vector<int>(p_size_board, 0));
    int number_of_zone = (p_number_of_players < 5) ? 4 : 9;
    int size_iteration = (p_size_board == 30) ? 3 : 2;
    for (int value = 1; value <= number_of_zone; value++) {
        int bfr_x = (value - 1) / size_iteration * 10;
        int bfr_y = ((value - 1) % size_iteration) * 10;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                int current_x = i + bfr_x;
                int current_y = j + bfr_y;
                if (current_x < p_size_board && current_y < p_size_board) {
                    new_board[current_x][current_y] = 0;
                }
            }
        }
    }
    return new_board;
}

void clear() {
    system("clear");
}
void displayColor(int p_colorInput, int p_colorBack) {
    printf("\033[%d;%dm", p_colorInput, p_colorBack);
}

void displayBoard(const std::vector<std::vector<int>>& p_board, int p_size_board) {
    std::cout << "  ";
    for (int i = 1; i <= p_size_board; ++i) {
        std::cout << std::setw(3) << i;
    }
    std::cout << std::endl;
    for (int x = 0; x < p_size_board; x++) {
        std::cout << std::setw(2) << x + 1;
        for (int y = 0; y < p_size_board; y++) {
            if (p_board[x][y] == 0) {
                std::cout << std::setw(3) << ".";
            } else if (p_board[x][y] == 1 || p_board[x][y] == 11) {
                if (p_board[x][y] == 1) {
                    displayColor(31, 49);
                    std::cout << std::setw(3) << "P1";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 11) {
                    displayColor(31, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 2 || p_board[x][y] == 12) {
                if (p_board[x][y] == 2){
                    displayColor(32, 49);
                    std::cout << std::setw(3) << "P2";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 12) {
                    displayColor(32, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 3 || p_board[x][y] == 13) {
                if (p_board[x][y] == 3 ){
                    displayColor(33, 49);
                    std::cout << std::setw(3) << "P3";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 13) {
                    displayColor(33, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            }else if (p_board[x][y] == 4 || p_board[x][y] == 14) {
                if (p_board[x][y] == 4 ){
                    displayColor(30, 49);
                    std::cout << std::setw(3) << "P4";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 14) {
                    displayColor(30, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 5 || p_board[x][y] == 15) {
                if (p_board[x][y] == 5 ){
                    displayColor(37, 49);
                    std::cout << std::setw(3) << "P5";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 15) {
                    displayColor(37, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 6 || p_board[x][y] == 16) {
                if (p_board[x][y] == 6 ){
                    displayColor(34, 49);
                    std::cout << std::setw(3) << "P6";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 16) {
                    displayColor(34, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 7 || p_board[x][y] == 17) {
                if (p_board[x][y] == 7 ){
                    displayColor(35, 49);
                    std::cout << std::setw(3) << "P7";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 17) {
                    displayColor(35, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 8 || p_board[x][y] == 18) {
                if (p_board[x][y] == 8 ){
                    displayColor(36, 49);
                    std::cout << std::setw(3) << "P8";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 18) {
                    displayColor(36, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else if (p_board[x][y] == 9 || p_board[x][y] == 19) {
                if (p_board[x][y] == 9 ){
                    displayColor(38, 49);
                    std::cout << std::setw(3) << "P9";
                    displayColor(0, 49);
                } else if (p_board[x][y] == 19) {
                    displayColor(38, 49);
                    std::cout << std::setw(3) << "X";
                    displayColor(0, 49);
                }
            } else {
                std::cout << std::setw(3) << p_board[x][y];
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int findSpawnZone(int p_spawn_x, int p_spawn_y) {
    int number_zone = (number_of_players < 5) ? 2 : 3;
    int zone_x = (p_spawn_x - 1) / 10 + 1;
    int zone_y = (p_spawn_y - 1) / 10 + 1;
    return (zone_x - 1) * number_zone + zone_y;
}

bool isZoneOccupied(int p_spawnZone) {
    for (PlayerInfo player : players) {
        if (player.spawnZone == p_spawnZone) {
            return true;
        }
    }
    return false;
}

int askSpawnPoint(int p_player_number) {
    int spawn_x, spawn_y;

    std::cout << "Entrez les coordonnées de la base du joueur "<< p_player_number << " (column(y) row(x)): ";
    std::cin >> spawn_x >> spawn_y;

    if (spawn_x < 1 || spawn_x > size_board || spawn_y < 1 || spawn_y > size_board) {
        std::cout << "La position de base est invalide, veuillez en choisir une autre !"<< std::endl;
        return askSpawnPoint(p_player_number);
    }

    int spawn_zone = findSpawnZone(spawn_x, spawn_y);

    if (isZoneOccupied(spawn_zone)) {
        std::cout << "Cette zone de base (10x10) est déjà occupée, veuillez en choisir une autre !" << std::endl;
        return askSpawnPoint(p_player_number);
    }

    players.push_back(PlayerInfo{p_player_number, spawn_zone, spawn_x, spawn_y});
    board[spawn_x - 1][spawn_y - 1] = p_player_number;

    clear();
    displayBoard(board, size_board);

    return 0;
}

bool isTilePlacementValid(const Tile& p_tile, int x, int y, const std::vector<std::vector<int>>& board) {
    const auto& tile_form = p_tile.getForm();
    size_t tile_rows = tile_form.size();
    size_t tile_cols = (tile_rows > 0) ? tile_form[0].size() : 0;
    if (x < 0 || x + tile_rows > board.size() || y < 0 || y + tile_cols > board[0].size()) {
        std::cout << "Veuillez poser la tuile dans le plateau.\n";
        return false;
    }
    for (size_t i = 0; i < tile_rows; ++i) {
        for (size_t j = 0; j < tile_cols; ++j) {
            if (tile_form[i][j] == 1) {
                int current_x = x + i;
                int current_y = y + j;
                if (board[current_x][current_y] != 0) {
                    std::cout << "Impossible de poser une tuile sur une autre tuile !\n";
                    return false;
                }
            }
        }
    }

    return true;
}

bool placeTileOnBoard(const Tile &p_tile, int p_x, int p_y, int p_player_number, std::vector<std::vector<int>> &p_board) {
    if (isTilePlacementValid(p_tile, p_x, p_y, p_board)) {
        const auto &tile_form = p_tile.getForm();
        size_t tile_row = tile_form.size();
        size_t tile_colmn = (tile_row > 0) ? tile_form[0].size() : 0;

        for (size_t i = 0; i < tile_row; ++i) {
            for (size_t j = 0; j < tile_colmn; ++j) {
                if (tile_form[i][j] == 1) {
                    p_board[p_x + i][p_y + j] = 10 + p_player_number;
                }
            }
        }
        return true;
    }
    return false;
}

int findSquareSize(const std::vector<std::vector<int>>& p_board, int p_player_number, int p_start_X, int p_start_Y, int p_size) {
    const std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    std::vector<std::vector<bool>> visited(p_size, std::vector<bool>(p_size, false));
    std::stack<std::pair<int, int>> try_stock;
    try_stock.push({p_start_X, p_start_Y});
    visited[p_start_X][p_start_Y] = true;
    int size_quare = 0;

    while (!try_stock.empty()) {
        auto [current_x, current_y] = try_stock.top();
        try_stock.pop();
        size_quare++;

        for (const auto& [dx, dy] : directions) {
            int new_x = current_x + dx;
            int new_y = current_y + dy;

            if (new_x >= 0 && new_x < p_size && new_y >= 0 && new_y < p_size) {
                if (board[new_x][new_y] == p_player_number + 10 && !visited[new_x][new_y]) {
                    visited[new_x][new_y] = true;
                    try_stock.push({new_x, new_y});
                }
            }
        }
    }

    if (size_quare == 1) {
        return 0;
    }

    int side_square = static_cast<int>(std::sqrt(size_quare));
    if (side_square * side_square == size_quare) {
        return size_quare;
    } else {
        return 0;
    }
}

void victoryCondition(const std::vector<std::vector<int>>& p_board, int p_number_of_players, int p_size_board) {
    std::vector<int> player_square_size(p_number_of_players, 0);
    for (int i = 0; i < p_size_board; ++i) {
        for (int j = 0; j < p_size_board; ++j) {
            int current_player_id = board[i][j] - 1;
            if (current_player_id >= 0 && current_player_id < number_of_players) {
                int size_quare = findSquareSize(p_board, current_player_id + 1, i, j, p_size_board);
                player_square_size[current_player_id] = std::max(player_square_size[current_player_id], size_quare);
            }
        }
    }


    auto max_square_player = std::max_element(player_square_size.begin(), player_square_size.end());
    int winner = std::distance(player_square_size.begin(), max_square_player);

    std::cout << "Le joueur " << winner + 1 << " a gagné !" << std::endl;
}

void switchPlayerTurn(int& p_currentPlayer) {
    p_currentPlayer = (p_currentPlayer + 1) % number_of_players;
}