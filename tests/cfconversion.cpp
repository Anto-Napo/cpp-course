#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;

    cout << "****** C & F conversion ******" << '\n';

    double c;

    double f;

    bool ctof;

    double result;

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

    cout << "The result is " << result << (ctof ? "F" : "C") << '\n' << "****************************";

    return 0;
}