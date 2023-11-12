#include <iostream>
#include <vector>

int size_board = 20;
int number_of_players = 0;
std::vector<std::vector<int>> board;

int askNumberOfPlayers(int& p_number_of_players) {
    std::string user_verification;
    std::cout << "Hello, how many players do you want (2-9)?" << std::endl;
    std::cin >> p_number_of_players;
    std::cout << "You want " << p_number_of_players << " players (y/n)?" << std::endl;
    std::cin >> user_verification;
    if ((user_verification == "y" || user_verification == "Y") && (p_number_of_players > 1) && (p_number_of_players > 10)) {
        number_of_players = p_number_of_players;
        return number_of_players;
    } else {
        return askNumberOfPlayers(p_number_of_players);
    }
}

int setSizeBoard(int p_number_of_players) {
    if (p_number_of_players < 5) {
        size_board = 20;
    } else {
        size_board = 30;
    }
    return size_board;
}

void fillBoard(int p_size_board) {
    board.resize(p_size_board, std::vector<int>(p_size_board, 0));
}

void displayBoard(int p_size_board) {
    for (int x = 0; x < p_size_board; x++) {
        for (int y = 0; y < p_size_board; y++) {
            if (board[x][y] == 0) {
                std::cout << "x";
            }
        }
        std::cout << std::endl;
    }
    std::cout << p_size_board << std::endl;
}

void run() {
    int run_number_of_players = setSizeBoard(askNumberOfPlayers(number_of_players));
    fillBoard(run_number_of_players);
    displayBoard(run_number_of_players);
}

int main() {
    run();
    return 0;
}



// Mettre input nombre de jouer / entre 2 9
//Return 2 to 9 players, the order of play determined randomly. From 2 to 4 players, the grid will be 20x20 squares; from 5 to 9, 30x30.
// odre des jouer
// game state
// random odre
// Mettre lettre sur rebord des board
// placer les pi!ces
// faire toutes les pièces
// code aski nom du jeux lancement
// Lis les TXT aléatoires
// Forme avec des 0, if else transforme les 0 en l'index du joueur
// code couleurs --> if else colorama fonction des chiffres