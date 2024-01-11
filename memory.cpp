#include <iostream>

void swap(std::string &x, std::string &y);

void printInfos(const std::string name, const int age);

void walk(int steps);

//! Function template
template <typename T, typename U> //? Use 2 typenames if you have multiple functions || if you want parameters with datatypes that may be different
//* Use auto if different datatypes can be returned
auto max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {
    //! Pass references to a function
    std::string x = "Tea";
    std::string y = "Water";

    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';

    swap(x, y);


    //! Constant parameters
    std::string name = "Anto";
    int age = 14;

    printInfos(name, age);


    //! Null pointers
    int *pointer = nullptr;
    int z = 123;

    pointer = &z;

    if(pointer == nullptr) {
        std::cout << "The adress was not assigned" << '\n';
    } else {
        std::cout << "The adress was assigned." << '\n';
        std::cout << *pointer;
    }
    std::cout << '\n';


    //! Dynamic memory (commented because of next lessons)
    char *pGrades = nullptr;
    int size;

    std::cout << "How many grades do you have?\n";
    // std::cin >> size;

    pGrades = new char[/*size*/1];

    // for(int i = 0; i < size; i++){
    //     std::cout << "Enter your grade #" << i + 1 << ": ";
    //     std::cin >> pGrades[i];
    // }

    // std::cout << "Your grades are: ";
    // for(int i = 0; i < size; i++) {
    //     std::cout << pGrades[i] << ' ';
    // }

    delete[] pGrades;
    std::cout << '\n';


    //! Recursion
    //? Useful for sorting and searching algorithms

    walk(5);


    //! Function template
    //? If we want a function to be compatible with lots of data types

    std::cout << max(2, 1.2);

    return 0;
}

void walk(int steps) {
    //* Iterative
    //! for(int i = 0; i < steps; i++) {
    //!     std::cout << "I take a step!\n";
    //! }

    //* Recursive (Clearer but uses more memory & slower)
    if(steps > 0) {
        std::cout << "I take a step!\n";
        walk(steps - 1);
    }
}

void printInfos(const std::string name, const int age) {
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << "\n\n";
}

void swap(std::string &x, std::string &y) {
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "Function's X: " << &x << '\n';
    std::cout << "Function's Y: " << &y << "\n\n";
}