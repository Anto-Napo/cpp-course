#include <iostream>
#include <vector>
#include <ctime>


//! Alias
typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
//* (Outdated) using number_t = int;

namespace first {
  int x = 1;
}

namespace maths {
  double first = 3; 
  double second = 4;
  double greater;
}

void happyBirthday(std::string name);

double getTotal(double prices[], int size);

int searchArray(int arr[], int size, int toFind);

void sortArr(int toSortArr[], int size);

int main() {
  using std::string;
  using std::cout;
  using std::cin;

  // Standart::console output
  cout << "I like pizza" << '\n';
  std::cout << "\tIt's good" << std::endl;

  const double PI = 3.14159;

  std::string firstname = "Anto";

  double age = 7.9;

  std::cout << age << " " << firstname << "\n\n";


  //! namespaces

  //* Can use `using namespace std` but name conflits, rather use `using std::cout || using std::string`

  //* using namespace first;
  // If x isnt specified localy, use this namespace

  int x = 2;

  std::cout << first::x << "\n\n";


  //! type conversion

  int pi1 = 3.14; //* return 3, inplicit

  double pi2 = (int) 3.14; //* return 3, explicit

  cout << pi1 << ' ' << pi2 << "\n\n";

  int first = 8;

  int second = 10;

  double division = first / (double) second * 100;


  //! user input

  string name;

  int birthyear;

  //* Commented because of next lessons

  /*  std::cout << "What's your name?" << '\n';

  std::getline(std::cin >> std::ws, name);

  std::cout << "What's your born year?" << '\n';

  std::cin >> birthyear;

  std::cout << "Hello " << name << ", you're born in " << birthyear << '\n\n'; */

  
  //! maths

  maths::greater = std::max(maths::first, maths::second);

  cout << "Greater: " << maths::greater << "\n\n";
  // min(); 

  //? Need `#include <cmath>`: pow(x, y); sqrt(x); abs(-x); round(double); && ceil(double); && floor(double);

  //! switch

  int month;

  cout << "What's the month number? (1 - 12)" << '\n';

  //* Commented because of next lessons

  // cin >> month;

  switch(month) {
    case 1:
      cout << "It's January" << '\n';
      break;
    case 2:
      cout << "It's February" << '\n';
      break;
    case 3:
      cout << "It's March" << '\n';
      break;
    case 4:
      cout << "It's April" << '\n';
      break;
    case 5:
      cout << "It's May" << '\n';
      break;
    case 6:
      cout << "It's June" << '\n';
      break;
    case 7:
      cout << "It's July" << '\n';
      break;
    case 8:
      cout << "It's August" << '\n';
      break;
    case 9:
      cout << "It's September" << '\n';
      break;
    case 10:
      cout << "It's October" << '\n';
      break;
    case 11:
      cout << "It's November" << '\n';
      break;
    case 12:
      cout << "It's December" << '\n';
      break;
    default:
      cout << "Enter a valid number (1-12), " << month << " isn't a valid month." << '\n';
  }

  cout << '\n';


  //! Random numbers

  // Seed (usally the current time) included with ctime
  srand(time(NULL));

  // random number between 1 and 6
  int rdm = rand() % 6 + 1;

  cout << "The number rolled is " << rdm << "\n\n";

  //? You may want to use switches with random numbers for events


  //! Functions

  happyBirthday("Anto");

  
  //! Arrays

  //* Pass array to a function

  //? The function array is a pointer, so it's impossible to get the size of the array from there, so we give it the size when we call it. 
  double prices[] = {5.99, 45.99, 1.50, 31.99};

  int size = sizeof(prices)/sizeof(prices[0]);

  double total = getTotal(prices, size);

  std::cout << "Total: $" << total << '\n';


  //* Search through an array to find an element (Commented bcs of next lessons)

  //? -1 usally means that the index wasn't found.
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int foundIndex;

  int toFind;

  cout << "Which number do you want to find? ";

  // cin >> toFind;

  // foundIndex = searchArray(numbers, sizeof(numbers)/sizeof(numbers[0]), toFind);

  // if(foundIndex != -1)  {
  //   cout << "The number " << toFind << " was found at the index " << foundIndex;
  // } else {
  //   cout << "The number " << toFind << " wasn't found.";
  // }

  std::cout << "\n\n";

  //* Bubble sort algorithm

  int toSortArr[] = {1, 10, 9, 2, 8, 3, 7, 4, 6, 5};

  sortArr(toSortArr, sizeof(toSortArr)/sizeof(toSortArr[0]));

  for(int i = 0; i < sizeof(toSortArr)/sizeof(toSortArr[0]); i++) {
    std::cout << toSortArr[i] << ' ';
  }

  std::cout << "\n\n";

  //* Fill an array with user input (commented bcs of next lessons)

  std::string foods[5];

  // for(int i = 0; i < sizeof(foods)/sizeof(std::string); i++) {
  //   std::cout << "Enter which food you like or quit with 'q'. #" << i + 1 << ": ";
  //   std::getline(std::cin, foods[i]);
  //   if(foods[i] == "q") {
  //     foods[i].clear();
  //     break;
  //   }
  // }

  std::cout << "You like:\n";

  for(int i = 0; !foods[i].empty(); i++) {
    std::cout << foods[i] << '\n';
  }

  std::cout << "\n\n";

  //* Multidimensional array

  //? var[(rows)][columns] 
  std::string things[][3] = {{"Pizza", "Hamburger", "Hotdog"},
                             {"YouTube", "Twitch", "TikTok"},
                             {"Pen", "Bic", "Fluo"}};

  int thingsRows = sizeof(things)/sizeof(things[0]);

  int thingsColumns = sizeof(things[0])/sizeof(things[0][0]);

  for(int i = 0; i < thingsRows; i++) {
    for(int j = 0; j < thingsColumns; j++) {
      std::cout << things[i][j] << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}

void sortArr(int toSortArr[], int size) {
  int temp;
  
  for(int i = 0; i < size - 1; i++){
    for(int j = 0; j < size - i - 1; j++) {
      if(toSortArr[j] > toSortArr[j + 1]) {
        temp = toSortArr[j];
        toSortArr[j] = toSortArr[j + 1];
        toSortArr[j + 1] = temp;
      }
    }
  }
}

int searchArray(int arr[], int size, int toFind) {
  for(int i = 0; i < size; i++) {
    if(arr[i] == toFind) {
      return i;
    }
  }

  return -1;
}

double getTotal(double prices[], int size) {
  double total = 0;

  for(int i = 0; i < size; i++) {
    total += prices[i];
  }

  return total;
}

void happyBirthday(std::string name) {
  std::cout << "Happy birthday " << name << "!\n\n";
}