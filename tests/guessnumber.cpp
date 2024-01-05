#include <iostream>
#include <ctime>

int main() {
    using std::cout;
    using std::cin;

    int randomNum;

    int guess;

    int tries;

    bool rightGuess = 0;

    bool continueGame = 1;

    cout << "******** Number guesser ********" << '\n';

    srand(time(NULL));

    randomNum = rand() % 100 + 1;

    do{
        cout << "Guess a number between 1 and 100: ";

        cin >> guess;

        if(guess < 1 || guess > 100) {
            cout << "You have to guess a number between 1 and 100. " << guess << " isn't a valid guess. The number to guess was " << randomNum << ".\n" << "********************************";

            return 1;
        }

        if(randomNum == guess) rightGuess = 1;

        tries ++;
    
        if (rightGuess) {
            cout << "You guessed the number " << guess << " which is the right one!" << "\n";
        } else {
            cout << "You guessed the number " << guess << " which is the wrong one!" << '\n';
        }

        cout << (tries == 1 ? "Try: " : "Tries: ") << tries << "\n\n";

        if(rightGuess) {
            cout << "Do you want to continue? (0: no / 1: yes) ";

            cin >> continueGame;

            cout << '\n';
            }
    } while(continueGame);

    cout << "********************************";

    return 0;
}