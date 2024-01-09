# C++ course

[From BroCode](https://www.youtube.com/watch?v=-TkoO8Z07hI "BroCode Video")

You may want to install the vscode extension `Better Comments`.

To compile on Windows: `g++ file.cpp -o filename ; ./filename`

# User input

`std::cin >> var;`

Get a line: `std::getline(std::cin, var);`

# Arrays (strings) methods

* `var.lenght();`

* `var.empty()` return boolean

* `var.clear()`

* `var.append()` add a string at the end of another string

* `var.at(x)` get the character at a given index

* `var.insert(x, "@")` insert a character at a given index

* `var.find(' ')` return the first index to contain this character or 18446744073709551615i if it isn't found

* `var.erase(x, y)` erase a portion between two given indexes

# Loops

## Do while loop

Do a block of code then repeat if the condition is true

```c++
int number;

do{
  std::cout << "Enter a positive #: ";
  std::cin >> number;
}while(number < 0);
```

## For loop

```c++
for(int i = 0; i <= 5; i++) {
  std::cout << i << `n`; // 0 1 2 3 4 5 6 7 8 9
} 
```

## Nested loops

```c++
for(int i = 0; i < rows; i++) {
  for(int j = 0; j < columns; j++) {
    std::cout << symbol;
  }
  std::cout << '\n':
}

/*
rows = 3

columns = 10

0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
*/
```

# Overload functions

You can overload functions by creating functions with the same name but with different parameters.

```c++
void bakePizza() {
  std::cout << "Here is your pizza!";
}

void bakePizza(std::string topping){
  std::cout << "Here is your " << topping << " pizza!";
} 
```

# Variable scope

Global variables are declared outside of any functions.

To use a global variable when it's also declared locally, use the operator `::` before the name of the variable.

Using global variables is generally avoided.

# Arrays

`type var[] = {x, y, z};`

You have to specify the size of an array if it's not defined:

`type var[x];`

## sizeof()

`sizeof(var)` show the number of bytes a variable or a type takes.

```c++
std::string elements[] = {"Ag", "Cu", "Be", "Na"};

std::cout << sizeof(elements) << '\n'; // Output: 128

// To get the number of elements of an array:
std::cout << sizeof(elements)/sizeof(std::string); // Output: 4
```

## Iterate through an array

Classic for loop:

```c++
for(int i = 0; i < sizeof(elements)/sizeof(elements[0] /* Or `std::string` */); i++) {
    std::cout << elements[i] << '\n';
}
```

For each loop:

```c++
for(std::string element : elements) {
    std::cout << element << '\n';
}
```

## Pass an array to a function

L.xxx of `himom.cpp`.

## Bubble sort algorithm

L.xxx of `himom.cpp`.

## fill()

To fill an array with some values.

```c++
const int SIZE = 99;

std::string foods[SIZE];

fill(foods, foods + SIZE/3, "Pizza");
fill(foods + SIZE/3, foods + (SIZE/3)*2, "Hamburger");
fill(foods + (SIZE/3)*2, foods + SIZE, "Hotdogs");

for(std::string food : foods) {
  std::cout << food << '\n';  
}

// Output: 33 times Pizza & 33 times Hamburger & 33 times Hotdog
```

`fill(beginning, end, value);`

## Multidimensional

L.xxx of `himom.cpp`.