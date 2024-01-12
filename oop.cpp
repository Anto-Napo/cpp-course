#include <iostream>

//! Struct
struct Student {
    std::string name;
    double gpa;
    bool enrolled; 
};

//! Enum
enum Day {monday = 0, tuesday = 1, wednesday = 2, thursday = 3, friday = 4, saturday = 5, sunday = 6};
enum Color {red, orange, black, pink, purple, silver, gold, gray, white, blue};

//! Class
class Car {
    private:
        std::string brand = "Unknown brand";
        std::string model = "Unknown model";
        int year = 0;
        Color color = white;

    public:
        void accelerate() {
            std::cout << "The car is accelerating\n";
        }

        void brake() {
            std::cout << "The car is breaking\n";
        }

        // void printInfo() {
        //     std::cout << brand << '\n';
        //     std::cout << model << '\n';
        //     std::cout << year << '\n';
        //     std::cout << color << '\n' << '\n';
        // }

        void setBrand(std::string brand) {
            this->brand = brand;
        }
        void setModel(std::string model) {
            this->model = model;
        }
        void setYear(int year) {
            if(year < 1789) {
                this->year = 1789;
            } else if (year >= 2024) {
                this->year = 2024;
            } else {
                this->year = year;
            }
        }
        void setColor(Color color) {
            this->color = color;
        }

        std::string getBrand() {
            return brand;
        }
        std::string getModel() {
            return model;
        }
        int getYear() {
            return year;
        }
        std::string getColor() {
            switch(color) {
                case 0:
                    return "Red";
                case 1:
                    return "Orange";
                case 2:
                    return "Black";
                case 3:
                    return "Pink";
                case 4:
                    return "Purple";
                case 5:
                    return "Silver";
                case 6:
                    return "Gold";
                case 7:
                    return "Gray";
                case 8:
                    return "White";
                case 9:
                    return "Blue";
                default:
                    return "No color defined";
            }
        }

        Car() {
        }

        Car(std::string brand, std::string model, int year, Color color) {
            this->brand = brand;
            this->model = model;
            if(year > 1789 && year <= 2024) {
                this->year = year;
            } else {
                this->year = 0;
            }
            this->color = color;
        }

        Car(std::string brand, std::string model, int year) {
            this->brand = brand;
            this->model = model;
            this->year = year;
        }
};

//! Inheritance
class Animal {
    public:
        bool alive = true;

        void eat() {
            std::cout << "The animal is eating\n";
        }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "The dog goes woof\n";
        }
        
        void eat() {
            std::cout << "Miom miom miom\n";
        }
};

class Cat : public Animal {
    public:
        void meow() {
            std::cout << "The cat goes meow\n";
        }
};

void printStudent(const Student student);
void increaseGpa(Student &student, const double toIncrease);

//! Main
int main() {
    //! Structs && pass structs to a function
    Student stud1;
    Student stud2;

    stud1.name = "Anto";
    stud1.gpa = 3.5;
    stud1.enrolled = true;
    increaseGpa(stud1, 0.2);

    stud2.name = "JP";
    stud2.gpa = 2.1;
    stud2.enrolled = false;
    increaseGpa(stud2, 1);

    printStudent(stud1);
    printStudent(stud2);


    //! Enums
    Day day = monday;

    switch(day) {
        case 0:
            std::cout << "It's monday!\n";
            break;
        case 1:
            std::cout << "It's tuesday!\n";
            break;
        case 2:
            std::cout << "It's wednesday!\n";
            break;
        case 3:
            std::cout << "It's thursday!\n";
            break;
        case 4:
            std::cout << "It's friday!\n";
            break;
        case 5:
            std::cout << "It's saturday!\n";
            break;
        case 6:
            std::cout << "It's sunday!\n";
            break;
    }
    std::cout << '\n';


    //! Classes && constructors
    // Car car1;

    // car1.brand = "Ford";
    // car1.model = "Mustang";
    // car1.year = 2024;
    // car1.color = silver;

    Car car1("Ford", "Mustang", 2024, silver);
    Car car2("Chevy", "Corvette", 2022);
    Car car3;

    std::cout << car1.getBrand() << '\n';
    std::cout << car1.getModel() << '\n';
    std::cout << car1.getYear() << '\n';
    std::cout << car1.getColor() << '\n';
    
    car1.accelerate();
    car1.brake();
    std::cout << '\n';


    //! Inheritance
    Dog dog;
    Cat cat;

    std::cout << cat.alive << '\n';
    std::cout << dog.alive << '\n';

    cat.eat();
    dog.bark();
    dog.eat();

    return 0;
}

void printStudent(const Student student) {
    std::cout << "Name: " << student.name << '\n';
    std::cout << "Student: " << student.gpa << '\n';
    std::cout << "Enrolled: " << student.enrolled << '\n';
}

void increaseGpa(Student &student, const double toIncrease) {
    student.gpa += toIncrease;
}