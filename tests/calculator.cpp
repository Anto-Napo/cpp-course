#include <iostream>

int main(){
  using std::cout;
  using std::cin;

  int a;

  int b;

  char op;

  double result;

  cout << "*********** CALCULATOR ***********" << '\n';

  cout << "What operation would you like to do? (+ - / * %)" << '\n';

  cin >> op;

  cout << "First number: ";

  cin >> a;

  cout << "Second number: ";

  cin >> b;

  switch(op){
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '/':
      result = a / (double) b;
      break;
    case '*':
      result = a * b;
      break;
    case '%':
      result = a % b;
      break;
    default:
      cout << "You didn't enter a valid operator.";
      return 0;
  }

  cout << "The result of " << a << ' ' << op << ' ' << b << " is " << result << '\n';

  cout << "*********************************";

  return 0;
}