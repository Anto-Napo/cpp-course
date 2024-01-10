#include <iostream>
#include <ctime>

void drawBord(char *spaces);
void playerMove(char *spaces, const char player);
void computerMove(char *spaces, const char computer);
bool checkWinner(const char *spaces, char player, char computer);
bool checkTie(const char *spaces);

int main() {
    srand(time(NULL));
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    const char player = 'X';
    const char computer = 'O';
    bool running = 1;
    bool startOver = 0;

    while(running) {
        do {
            do {
            drawBord(spaces);
            playerMove(spaces, player);
            running = checkWinner(spaces, player, computer);
            if(!running) break;
            running = checkTie(spaces);
            if(!running) break;
            computerMove(spaces, computer);
            running = checkWinner(spaces, player, computer);
            if(!running) break;
            running = checkTie(spaces);
        }while(running);
        drawBord(spaces);
        std::cout << "Do you want to start over (1 = yes | 0 = no)?\n";
        std::cin >> startOver;
        }while(startOver);
        
    }

    return 0;
}

void drawBord(char *spaces) {
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';

}
void playerMove(char *spaces, const char player) {
    int move;
    bool error = 0;
    std::cout << "Your turn.\n";
    do {
        std::cin >> move;
        move -= 1;
        if(move > 8 || move < 0) {
            std::cout << "You have to enter a number between 1 and 9.\n";
            error = 1;
        } else if(spaces[move] != ' ') {
            std::cout << "You can't select an already taken case.\n";
            error = 1;
        } else {
            error = 0;
        }
    }while(error);
    spaces[move] = player;
}
void computerMove(char *spaces, const char computer) {
    int move;
    bool isTaken = 0;
    do {
        move = rand() % 8;
        if(spaces[move] != ' ') {
            isTaken = 1;
        } else {
            isTaken = 0;
        }
    }while(isTaken);
    spaces[move] = computer;
    std::cout << '\n';
}
bool checkWinner(const char *spaces, char player, char computer) {
    if( // Horizontally
        (spaces[0] == player && spaces[0] == spaces[1] && spaces[1] == spaces[2]) ||
        (spaces[3] == player && spaces[3] == spaces[4] && spaces[4] == spaces[5]) ||
        (spaces[6] == player && spaces[6] == spaces[7] && spaces[7] == spaces[8]) ||
        // Vertically
        (spaces[0] == player && spaces[0] == spaces[3] && spaces[3] == spaces[6]) ||
        (spaces[1] == player && spaces[1] == spaces[4] && spaces[4] == spaces[7]) ||
        (spaces[2] == player && spaces[2] == spaces[5] && spaces[5] == spaces[8]) ||
        // Diagonally
        (spaces[0] == player && spaces[0] == spaces[4] && spaces[4] == spaces[8]) ||
        (spaces[2] == player && spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        std::cout << "The player won!\n";
        return 0;
    } else
    if( // Horizontally
        (spaces[0] == computer && spaces[0] == spaces[1] && spaces[1] == spaces[2]) ||
        (spaces[3] == computer && spaces[3] == spaces[4] && spaces[4] == spaces[5]) ||
        (spaces[6] == computer && spaces[6] == spaces[7] && spaces[7] == spaces[8]) ||
        // Vertically
        (spaces[0] == computer && spaces[0] == spaces[3] && spaces[3] == spaces[6]) ||
        (spaces[1] == computer && spaces[1] == spaces[4] && spaces[4] == spaces[7]) ||
        (spaces[2] == computer && spaces[2] == spaces[5] && spaces[5] == spaces[8]) ||
        // Diagonally
        (spaces[0] == computer && spaces[0] == spaces[4] && spaces[4] == spaces[8]) ||
        (spaces[2] == computer && spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        std::cout << "The computer won!\n";
        return 0;
    }
    return 1;
}
bool checkTie(const char *spaces) {
    bool tie;
    int count = 0;
    for(int i = 0; i < 9; i++) {
        if(spaces[i] != ' ') {
            count += 1;
        }
    }
    if(count == 9){
        std::cout << "The game is a tie!\n";
        return 0;
    }
    return 1;
}
