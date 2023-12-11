#include "Tile.h"
#include <iostream>

Tile::Tile() : size_x(0), size_y(0), tile_state(0) {
}

Tile::Tile(const std::vector<std::vector<int>>& p_form, int p_size_x, int p_size_y)
        : form(p_form), size_x(p_size_x), size_y(p_size_y), tile_state(0) {}

void Tile::displayTile() const {
    for (int i = 0; i < size_y; ++i) {
        for (int j = 0; j < size_x; ++j) {
            std::cout << (form[i][j] ? "X" : ".") << " ";
        }
        std::cout << std::endl;
    }
}


void Tile::turnTile() {
    std::vector<std::vector<int>> new_tile(size_x, std::vector<int>(size_y, 0));

    for (int i = 0; i < size_y; ++i) {
        for (int j = 0; j < size_x; ++j) {
            new_tile[j][size_y - i - 1] = form[i][j];
        }
    }

    form = std::move(new_tile);
    std::swap(size_x, size_y);
};

void Tile::inverseTile(char p_direction){
    if (p_direction == 'H' || p_direction == 'h') {
        std::reverse(form.begin(), form.end());
    } else if (p_direction == 'V' || p_direction == 'v') {
        for (auto& row : form) {
            std::reverse(row.begin(), row.end());
        }
    }
};

const std::vector<std::vector<int>>& Tile::getForm() const {
    return form;
}
void Tile::setForm(const std::vector<std::vector<int>> &p_newForm) {
    form = p_newForm;
}