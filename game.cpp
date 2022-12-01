#include <iostream>

int player = 1;
bool game = true;
std::string player1;
std::string player2;
std::string board = "## 1 #### 2 #### 3 ##\n1     #      #      #\n#####################\n2     #      #      #\n#####################\n3     #      #      #\n#####################\n";

bool win()
{
    if (board[25] == 'x' && board[32] == 'x' && board[39] == 'x'){
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[69] == 'x' && board[76] == 'x' && board[83] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[113] == 'x' && board[120] == 'x' && board[127] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[25] == 'x' && board[76] == 'x' && board[83] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[39] == 'x' && board[76] == 'x' && board[113] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[25] == 'x' && board[69] == 'x' && board[113] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[32] == 'x' && board[76] == 'x' && board[120] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;
        
    } else if (board[39] == 'x' && board[83] == 'x' && board[127] == 'x') {
        game = false;
        std::cout << player1 + " wins" << std::endl;

    } else if (board[25] == 'o' && board[32] == 'o' && board[39] == 'o'){
        game = false;
        std::cout << player2 + " wins" << std::endl;

    } else if (board[69] == 'o' && board[76] == 'o' && board[83] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;

    } else if (board[113] == 'o' && board[120] == 'o' && board[127] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;

    } else if (board[25] == 'o' && board[76] == 'o' && board[83] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;

    } else if (board[39] == 'o' && board[76] == 'o' && board[113] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;

    } else if (board[25] == 'o' && board[69] == 'o' && board[113] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;

    } else if (board[32] == 'o' && board[76] == 'o' && board[120] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;
        
    } else if (board[39] == 'o' && board[83] == 'o' && board[127] == 'o') {
        game = false;
        std::cout << player2 + " wins" << std::endl;

    }
    return 0;
}

bool check(int position)
{
    if (board[position] == 'x' || board[position] == 'o') {
        std::cout << "position already taken" << std::endl;
        return false;

    } else {
        std::cout << "position hasn't been taken" << std::endl;
        return true;

    }
}

std::string user() 
{
    std::string name;
    std::cout << "Enter player name: " << std::endl;
    std::getline(std::cin >> std::ws, name);
    return name;
}

void welcome(std::string a, std::string b)
{
    std::cout << "Welcome!" << std::endl;
    std::cout << "Player 1: " + a << std::endl;
    std::cout << "Player 2: " + b << std::endl;
}

int input()
{
    int row;
    int column;
    int pos = 0;

    if(player == 1) {
        std::cout << "It's " + player1 + " turn!" << std::endl;
        std::cout << "Choose Row: " << std::endl;
        std::cin >> row;
        std::cout << "Choose Column: " << std::endl;
        std::cin >> column;

    } else if (player == 2) {
        std::cout << "It's " + player2 + " turn!" << std::endl;
        std::cout << "Choose Row: " << std::endl;
        std::cin >> row;
        std::cout << "Choose Column: " << std::endl;
        std::cin >> column;
    }

    if (row == 1 && column == 1) {
        pos = 25;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 1 && column == 2) {
        pos = 32;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 1 && column == 3) {
        pos = 39;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 2 && column == 1) {
        pos = 69;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 2 && column == 2) {
        pos = 76;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 2 && column == 3) {
        pos = 83;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 3 && column == 1) {
        pos = 113;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 3 && column == 2) {
        pos = 120;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    } else if (row == 3 && column == 3) {
        pos = 127;
        if(check(pos)) {
            if (player == 1) {
                player = 2;
            } else {
                player = 1;
            }
        } else {
            return 0;
        }

    }
    std::cout << pos << std::endl;
    return pos;
}

int main()
{
    bool spot;
    char symbol;
    int place;
    player1 = user();
    player2 = user();

    welcome(player1, player2);
    std::cout << board << std::endl;

    while (game) {

        place = input();

        if (place == 0) {
            place = input();
        }

        if (player == 1) {
            symbol = 'o';

        } else {
            symbol = 'x';

        }
        
        board.at(place) = symbol;
        std::cout << board << std::endl;
        win();
        
    }
    
    return 0;
}