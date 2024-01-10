# C++ course

[From BroCode](https://www.youtube.com/watch?v=-TkoO8Z07hI "BroCode's Video")

You may want to install the vscode extension `Better Comments`.

To compile on Windows: `g++ file.cpp -o filename ; ./filename`.

There are two main files: `general.cpp` & `memory.cpp`.

The file `general.cpp` has two spaces as indents instead of four.

I did all of the test by myself with a very little help of the video, so it may not be optimal.

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

L.xxx of `general.cpp`.

## Bubble sort algorithm

L.xxx of `general.cpp`.

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

## Multidimensional arrays

L.xxx of `general.cpp`.

# Memory

## &

& correspond to the memory address, or the reference.

## Pass references to a function

When we do a classic function with parameters, these parameters are copies of the original variables, but when we do with reference, it passes the original variable and not a copy.

L.xxx of `memory.cpp`.

We can notice that the memory adresses of the swap function and those of the main function are the same.

## Constant parameters

For functions, if we don't want to change a parameter and want to use it as a read-only parameter, you can make it a constant so it's more secure, especially if it's with references where we don't want to change the original value.

L.xxx of `memory.cpp`.

## Pointers

### What's a pointer?

Thanks to the [pointer explained video](https://www.youtube.com/watch?v=2ybLD6_2gKM "Low Level Learning's Video") by Low Level Learning.

A pointer is a variable that holds the memory address of another variable.

```c++
int *pX = &x;
```

In english: integer pointer named pX is set to the adress of x.

```c++
int y = *pX;
```

In english: integer named y is set to the thing pointed to by x.

It's used because it makes code more readable.

### Null pointers

`Null` means that something has no value.

A pointer that has a `nullptr` value (null pointer) means that it doesn't point to anything.

It's useful if we don't assign to anything otherwise it could point to something we don't know.

Avoid printing a null pointer.

L.xxx of `memory.cpp`.