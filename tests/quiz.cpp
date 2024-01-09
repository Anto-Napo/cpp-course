#include <iostream>

int main() {
    std::string questions[] = {"1. What year was C++ released?", "2. Who invented C++", "3. What's the predecessor of C++?", "4. Is the earth flat?"};

    std::string options[][4] = {{"a. 1969", "b. 1975", "c. 1985", "d. 1989"},
                                {"a. Napoleon", "b. Guido van Rossum", "c. John Cena", "d. Bjarne Stroustrup"},
                                {"a. C", "b. C+", "c. C--", "d. B++"},
                                {"a. Yes", "b. No", "c. Maybe", "d. if(true){false}else{false}"}};

    char guesses[4];

    char key[4] = {'c', 'd', 'a', 'b'};

    int score = 0;

    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++) {
        std::cout << questions[i] << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guesses[i];

        std::cout << '\n';
    }

    for(int i = 0; i < sizeof(key)/sizeof(key[0]); i++) {
        if(guesses[i] == key[i]) {
            score ++;
        }
    }

    std::cout << "You have a score of " << score << "/4.";

    return 0;
}