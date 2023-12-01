#include "TileManagement.h"
#include <cstdlib>

TileManagement::TileManagement() {
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0},{1,1,1}}, 3, 2);// Pièce 1 - 1
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0}, {0, 1, 0} ,{1, 1, 1}}, 3, 3);//pièce 1 - 2
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0}, {1, 1, 1} ,{0, 1, 0}}, 3, 3);//pièce 1 - 3
    tile.emplace_back(std::vector<std::vector<int>>{{0, 0, 1}, {1, 1, 1} ,{1, 0, 0}}, 3, 3);//pièce 1 - 4
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0}, {1, 1, 1}}, 3, 2); // Pièce 1 - 5
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1}, {1, 1}}, 2, 2);//pièce 1 - 6
    tile.emplace_back(std::vector<std::vector<int>>{{1, 0, 1}, {1, 1, 1} }, 3, 2);//Pièce 1 - 7
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1, 1}}, 3, 1);//Pièce 1 - 8
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1}, {1, 1} ,{1, 0}}, 2, 3);//1-9
    tile.emplace_back(std::vector<std::vector<int>>{{1, 0}, {1, 1}}, 2, 2);//1-10
    tile.emplace_back(std::vector<std::vector<int>>{{0, 0, 1}, {0, 1, 1}, {1, 1, 0}}, 3, 3);//1-11
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1}}, 2, 1);//Pièce 1-12
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1}, {1, 1}, {1, 0},{1, 0},{1,1}}, 2, 5);//1-13
    tile.emplace_back(std::vector<std::vector<int>>{{1,1,1}, {1, 0, 0}, {1, 0, 0},{1, 0, 0},{1, 0, 0}}, 3, 5);//1-14
    tile.emplace_back(std::vector<std::vector<int>>{{0,0,0,1,0},{0,0,0,1,0}, {0,0,0,1,1},{0,1,1,1,0},{1,1,0,0,0}}, 5, 5);//1-15
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1},{0,1,1},{1,1,0},{1,0,0}}, 3, 4); //Pièce 1 - 16
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{1,1,1},{1,1,0},}, 3, 3);//Pièce 2 - 1
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1, 1}}, 3, 1);//Pièce 2 - 2
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,1},{1,0},{1,0}}, 2, 4);//Pièce 2 - 3
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,1},{1,1,0},{1,1,0}}, 3, 3);//Pièce 2 - 4
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{1,1,0},{1,1,1}}, 3, 3);//Pièce 2 - 5
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{0,1,0},{1,1,1},{1,0,0}}, 3, 4);//Pièce 2 - 6
    tile.emplace_back(std::vector<std::vector<int>>{{1, 0}, {1, 1}}, 2, 2);//Pièce 2 - 7
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1},{1,1},{1,1},{1,1}}, 2, 3);//Pièce 2 - 8
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,1},{0,1,0},{0,1,0},{0,1,0}}, 3, 4);//Pièce 2 - 9
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0,0},{1,1,0,0},{0,1,1,0},{0,0,1,1}}, 4, 4);//Pièce 2 - 10
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1, 1, 1}}, 4, 1);//Pièce 2 - 11
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0},{1,1,1},{0,0,1},{0,0,1}}, 3, 4);//Pièce 2 - 12
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,1},{1,0},{1,1},{1,0}}, 2, 5);//Pièce 2 - 13
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,1},{1,1},{1,0}}, 2, 4);//Pièce 2 - 14
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{0,1,0},{0,1,0},{1,1,1},{1,0,1}}, 3, 5);//Pièce 2 - 15
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1}}, 2, 1);//pièce 2 - 16
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0,0},{1,1,1,0},{1,0,1,1}}, 4, 3);//Pièce 3 - 1
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1},{0,1},{1,1},{1,0},{1,0}}, 2, 5);//Pièce 3 - 2
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,0,0},{0,1,0,0},{0,1,1,1},{1,1,0,0},{1,0,0,0}}, 4, 5);//Pièce 3 - 3
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,0},{1,1},{1,0}}, 2, 4);//Pièce 3 - 4
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1},{1,1},{1,0}}, 2, 3);//Pièce 3 - 5
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0,1},{1,1,1,1}}, 4, 2);//Pièce 3 - 6
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,0,1,1},{1,0,0,0,1},{1,1,1,1,1}}, 5, 3);//Pièce 3 - 7
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0,0},{1,0,0,0},{1,1,0,0},{0,1,1,1}}, 4, 4);//Pièces 3 - 8
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,0},{0,1,1},{1,1,0},{0,1,1},{0,1,0}}, 3, 5);//Pièces 3 - 9
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,1},{1,1}}, 2, 3);//Pièce 3 - 10
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0,0},{0,1,0,0},{1,1,1,1}}, 4, 3);//Pièce 3 - 11
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1},{1,1}}, 2, 2);//Pièce 3 - 12
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1},{1,1},{1,1},{1,0}}, 2, 4);//Pièce 3 - 13
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,1},{0,1,0},{1,1,0}}, 3, 3);//Pièce 3 - 14
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,1,1}}, 4, 1);//Pièce 3 - 15
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{1,1,1}}, 3, 2);//Pièce 3 - 16
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0,0},{1,0,0,0},{1,1,1,1}}, 4, 3); // Pièce 4 - 1
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,1,0},{1,1,0,0},{0,1,1,1}}, 4, 3);//Pièce 4 - 2
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1},{1,1},{1,0},{1,0}}, 2, 4); // Pièce 4 - 3
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0},{1,1,1}}, 3, 2);// Pièce 4 - 4
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,1},{1,0},{1,0},{1,0}}, 2, 5); //Pièce 4 - 5
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1,1,1},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{1,1,1,0,0}}, 5, 5); //pièce 4 - 6
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1},{0,1},{1,1},{1,0},{1,1},{1,0}}, 2, 6); // Pièce 4 - 7
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,1,1}}, 4, 1);//PIÈCE 4 - 8
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,0,0},{0,1,0,0},{0,1,1,1},{0,0,0,1}}, 4, 4);//pièce 4 - 9
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{0,1,0},{1,1,1},{0,1,0},{0,1,0}}, 3, 5);//pièce 4 - 10
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1},{0,0,1},{1,1,1}}, 3, 3);//pièce 4 - 11
    tile.emplace_back(std::vector<std::vector<int>>{ {1},{1},{1},{1},{1},{1},{1}}, 1, 6);//pièce 4 - 12
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,1},{1,1,1},{0,1,0},{1,1,0,0}}, 3, 4);//pièce 4 - 13
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1,0},{1,1,1,0},{0,1,1,1},{0,1,0,0}}, 4, 4);//pièce 4 - 14
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,1},{0,1,0},{0,1,0},{1,1,1}}, 3, 4);//pièce 4 - 15
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,0},{1,1},{1,0},{1,0}}, 2, 5);//pièce 4 - 16
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,0,0},{0,1,0,0},{0,1,0,1},{1,1,1,1}}, 4, 4); // Pièce 5 - 1
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1},{0,1,1},{1,1,0},{1,0,0},{1,1,0}}, 3, 5);//Pièce 5 - 2
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,1},{0,1,0},{0,1,0},{0,1,0},{1,1,0},{1,0,0}}, 3, 6); // Pièce 5 - 3
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,1,0},{1,1,1,1}}, 4, 2);// Pièce 5 - 4
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1,0,0},{0,1,0,1},{0,1,0,1},{0,1,1,1}}, 4, 4); //Pièce 5 - 5
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0},{1,1},{1,0},{1,0},{1,0}}, 2, 5); //pièce 5 - 6
    tile.emplace_back(std::vector<std::vector<int>>{ {1,0,0,0},{1,0,1,0},{1,1,1,1},{0,1,0,0},{0,1,0,0}}, 4, 5); // Pièce 5 - 7
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1},{1,0},{1,0},{1,0},{1,0},{1,0},{1,0}}, 2, 7);//PIÈCE 5 - 8
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{1,1,1},{1,0,0},{1,0,0}}, 3, 4);//pièce 5 - 9
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1}}, 2, 1);//pièce 5 - 10
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1},{1,0,1},{1,1,1}}, 3, 3);//pièce 5 - 11
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0},{1,1,1},{1,0,1}}, 3, 3);//pièce 5 - 12
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,1,0,0},{0,0,1,0,0},{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0}}, 5, 5);//pièce 5 - 13
    tile.emplace_back(std::vector<std::vector<int>>{ {0,0,0,1},{0,0,1,1},{0,0,1,0},{0,0,1,0},{0,1,1,0},{1,1,0,0}}, 4, 6);//pièce 5 - 14
    tile.emplace_back(std::vector<std::vector<int>>{ {1,1},{1,0},{1,1},{1,0},{1,1}}, 2, 5);//pièce 5 - 15
    tile.emplace_back(std::vector<std::vector<int>>{ {0,1,0,0},{0,1,0,0},{0,1,0,0},{1,1,1,1},{0,1,0,0}}, 4, 5);//pièce 5 - 16
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1}, {1, 1}, {1, 0}, {1, 1}}, 2, 4);// Pièce 6 - 16
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 1}, {1, 1, 0}, {1, 0, 0}, {1, 0, 0}}, 3, 4);// Pièce 6 - 15
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0, 0}, {1, 1, 1, 1}, {1, 0, 0,0}}, 4, 3);// Pièce 6 - 14
    tile.emplace_back(std::vector<std::vector<int>>{{1, 0}, {1, 0}, {1, 0}, {1, 1}}, 2, 4);// Pièce 6 - 13
    tile.emplace_back(std::vector<std::vector<int>>{{1, 0, 0}, {1, 1, 0}, {1, 1, 1}}, 3, 3);// Pièce 6 - 12
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0}, {0, 1, 1}, {1, 1, 0}, {1, 0, 0}}, 3, 4);// Pièce 6 - 11
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1, 1}, {1, 0, 1}, {1, 0, 0}, {1, 1, 0}}, 3, 4);// Pièce 6 - 10
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0}, {0, 1, 0}, {1, 1, 1}, {0, 1, 0}}, 3, 4);// Pièce 6 - 9
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 1}, {0, 1, 0}, {0, 1, 0}, {1, 1, 0}}, 3, 4);// Pièce 6 - 8
    tile.emplace_back(std::vector<std::vector<int>>{{0, 0, 1, 1}, {1, 1, 1, 0}, {1, 0, 0, 0}, {1, 1, 0, 0}}, 4, 4);// Pièce 6 - 7
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1, 0, 0}, {1, 1, 1, 1}}, 4, 2);// Pièce 6 - 6
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 0}, {0, 1, 1}, {1, 1, 0}, {0, 1, 0}}, 3, 4);// Pièce 6 - 5
    tile.emplace_back(std::vector<std::vector<int>>{{1, 1, 0}, {1, 1, 0}, {0, 1, 1}, {0, 1, 0} , {0, 1, 0} , {0, 1, 0}}, 3, 6);// Pièce 6 - 4
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 1}, {0, 1, 0}, {1, 1, 0}, {0, 1, 1} , {0, 1, 0} , {0, 1, 0}}, 3, 6);// Pièce 6 - 3
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1, 1}, {0, 1, 0}, {1, 1, 0}, {1, 0, 0}}, 3, 4);// Pièce 6 - 2
    tile.emplace_back(std::vector<std::vector<int>>{{0, 1}, {1, 1}, {1, 0}, {1, 0}, {1, 0}}, 2, 5);// Pièce 6 - 1
}

Tile TileManagement::chooseRandomTile() {
    current_tile = rand() % tile.size();
    return tile[current_tile];
}

Tile TileManagement::nextTile() {
    current_tile = (current_tile + 1) % tile.size();
    return tile[current_tile];
}
