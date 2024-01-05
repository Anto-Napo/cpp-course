#include <iostream>
#include <cmath>

namespace cf {
    double c;

    double f;

    bool ctof;

    double result;

    bool redo;
}


int main(){
    using std::cout;
    using std::cin;
    using namespace cf;

    while (true)
    {
    cout << "****** C & F conversion ******" << '\n';

    cout << "Celsius to farenheit (1) or farenheit to Celsius (0) ?" << '\n';

    if (!(cin >> ctof)) {
        cout << "Error: Invalid input for Celsius to Fahrenheit selection" << '\n' << "****************************";

        return 1;
    }

    if(ctof) {
        cout << "Celsius temperature (default = 0): ";

        cin >> c;

        result = c * (9 / (double) 5) + 32;
    } else if (!ctof) {
        cout << "Farenheit temperature (default = 0): ";

        cin >> f;

        result = (f - 32) * 5 / (double) 9;
    }

    cout << "The result is " << result << (ctof ? "F" : "C") << "\n\n";

    cout << "Do you want to continue (1: yes / 0: no)?" << '\n';

    cin >> redo;
    
    cout << '\n';

    if (!redo) break;
    }

    cout << "****************************";
    
    return 0;
}