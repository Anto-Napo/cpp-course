#include <iostream>
#include <algorithm>
#include <cctype>

int bal = 0;

const int MAX_NUMBER = 2147483646;

void deposit();

void withdraw();

void balance();

//! MAIN
int main() {
    char selection;

    bool quit = 0;

    std::cout << "********** Bank **********\n";

    do {
        std::cout << "What do you want to do?\n" << "Deposit (D)\n" << "Withdraw (W)\n" << "Show balance (B)\n" << "Quit (Q)\n";

        std::cin >> selection;

        switch(tolower(selection)) {
            case 'd':
                deposit();
                break;
            case 'w':
                withdraw();
                break;
            case 'b':
                balance();
                break;
            case 'q':
                quit = 1;
                break;
            default:
                std::cout << "Wrong input\n\n";
                break;
        }
    } while (quit == 0);

    std::cout << "**************************";

    return 0;   
}

//! DEPOSIT
void deposit() {
    int toDeposit = 0;

    std::cout << "How much money do you want to deposit?\n";

    std::cin >> toDeposit;

    if (toDeposit <= 0) {
        std::cout << "You can't deposit 0 EU or negative money.\n\n";

        return;
    } else if (toDeposit > MAX_NUMBER) {
        std::cout << "You can't deposit more than 2.147.483.646 EU.";

        return;
    }

    bal += toDeposit;

    std::cout << "You succesfully deposited " << toDeposit << " EU to your balance.\n" << "Balance: " << bal << " EU\n\n";
}

//! WITHDRAW
void withdraw() {
    int toWithdraw = 0;

    std::cout << "How much money do you want to withdraw?\n";

    std::cin >> toWithdraw;

    if (toWithdraw <= 0) {
        std::cout << "You can't withdraw 0€ or negative money.\n\n";

        return;
    } else if (toWithdraw > MAX_NUMBER) {
        std::cout << "You can't withdraw more than 2.147.483.646 EU.";

        return;
    }

    bal -= toWithdraw;

    std::cout << "You succesfully withdrawed " << toWithdraw << " EU from your balance.\n" << "Balance: " << bal << " EU\n\n";
}

//! BALANCE
void balance() {
    std::cout << "Your balance is " << bal << " EU.\n\n";
}