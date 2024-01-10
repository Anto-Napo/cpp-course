#include <iostream>

void swap(std::string &x, std::string &y);

void printInfos(const std::string name, const int age);

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

    return 0;
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