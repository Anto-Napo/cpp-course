#include <iostream>
#include <ctime>

int main() {
    using std::cout

    srand(time(NULL));

    char userInput;

    int randomInput;

    std::string result;

    bool continueGame = 0;

    std::cout << "******** Rock & Paper & Scisors ********\n";

    do {
        std::cout << "Rock (R), paper (P) or scissors (S)?\n";

        std::cin >> userInput;

        userInput = tolower(userInput);

        randomInput = rand() % 3;

        switch (randomInput) {
            case 0:
                result = "Rock";
                break;
            case 1:
                result = "Paper";
                break;
            case 2:
                result = "Scissors";
                break;
            default:
                std::cout << "ERROR";
                return 1;
        }

        if(userInput == tolower(result[0])) {
            //* Tie
            std::cout << "Tie! You both choosed " << result;
        } else if((userInput == 'r' && result[0] == 'P') || (userInput == 'p' && result[0] == 'S') || (userInput == 's' && result[0] == 'R')) {
            //* Loose
            std::cout << "You lost. The bot choosed " << result;
        } else {
            //* Win
            std::cout << "You won! The bot choosed " << result;
        }

        std::cout << ".\nDo you want to continue (1: yes / 0: no)? ";

        std::cin >> continueGame;

        std::cout << '\n';
    } while (continueGame);

    std::cout << "****************************************";

    return 0;
}