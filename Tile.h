#ifndef LAYINGGRASS_TILE_H
#define LAYINGGRASS_TILE_H

#include <vector>

class Tile {
public:
    Tile();
    Tile(const std::vector<std::vector<int>> &form, int size_x, int size_y);

    void displayTile() const;
    void turnTile();
    void inverseTile(char direction);
    const std::vector<std::vector<int>> &getForm() const;

    void setForm(const std::vector<std::vector<int>> &newForm);

private:
    std::vector<std::vector<int>> form;
    int size_x;
    int size_y;
    int tile_state;
};

#endif
