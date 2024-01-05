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

  std::cout << first::x << '\n';


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

  std::cout << "Hello " << name << ", you're born in " << birthyear << '\n'; */

  
  //! maths

  maths::greater = std::max(maths::first, maths::second);

  cout << "Greater: " << maths::greater << '\n';
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


  //! Random numbers

  // Seed (usally the current time) included with ctime
  srand(time(NULL));

  // random number between 1 and 6
  int rdm = rand() % 6 + 1;

  cout << "The number rolled is " << rdm;

  //? You may want to use switches with random numbers for events

  return 0;
}