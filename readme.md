# C++ course

You may want to install the vscode extension `Better Comments`

To compile: `g++ file.cpp -o filename ; ./filename`

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