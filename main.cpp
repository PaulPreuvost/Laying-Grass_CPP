#include <iostream>
#include <string>
#include <vector>

int size_board = 20;
int number_of_players = 0;
//const int player_boar_size = 9;
//int player_board[player_boar_size][player_boar_size];
std::vector<std::vector<int>> board;

//int createPlayerBoard(int p_player_boar_size, int p_number_of_players){
//    int player = 1;
//    while (player < p_number_of_players){
//        for (int x = 0; x < p_player_boar_size; x++){
//            for (int y = 0; y < p_player_boar_size; y++){
//                player_board[x][y] = x;
//            }
//            std::cout << std::endl;
//        }
//        board.
//    };
//};

int askNumberOfPlayers(int& p_number_of_players) {
    std::string user_verification;
    std::cout << "How many players do you want (2-9)?" << std::endl;
    std::cin >> p_number_of_players;
    std::cout << "You want " << p_number_of_players << " players (y/n)?" << std::endl;
    std::cin >> user_verification;
    if ((user_verification == "y" || user_verification == "Y") && (p_number_of_players > 1) && (p_number_of_players < 10)) {
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
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    std::cout << p_size_board << std::endl;
}

void displayTitle() {
    // ASKI DU JEUX "Laying Grass"
    std::cout << "Hello !" <<std::endl;
}

void run() {
    displayTitle();
    int run_number_of_players = setSizeBoard(askNumberOfPlayers(number_of_players));
    fillBoard(run_number_of_players);
    displayBoard(run_number_of_players);
}


int main() {
    run();
    return 0;
}

// Enregister les fomes, avec rotations et inversion
// Clean console

// Mettre input nombre de jouer / entre 2 9
//Return 2 to 9 players, the order of play determined randomly. From 2 to 4 players, the grid will be 20x20 squares; from 5 to 9, 30x30.
// odre des jouer
// game state
// random odre
// Mettre lettre sur rebord des board
// placer les pi!ces
// faire toutes les pièces
// code aski nom du jeux lancement

// Tableau liste de joeur taille // Ask number of player
// Lis les TXT aléatoires
// Couleurs choisi par le joeur
// Forme avec des 0, if else transforme les 0 en l'index du joueur
// Transforme les O en niveaux
// code couleurs --> if else colorama fonction des chiffres

//- COMPRENDRE BIEN CONSIGNES / VIDÉO COMPRENDRE
//- Fonction lire le txt
//- Les placer mettre couleurs du joueur en bouger avec ZQSD comme cardinal chain
//- Conditions de victoire / égalité
//- Finir les titles
//- Pointeur tableau
//- Zone de spawn des jouer
//- Dictionnaire couleurs des joueurs indexe des joueurs /MAP containeur
//- Couleurs
//- Déplacer une pièce
//- Plateau autre
//- Lire txt