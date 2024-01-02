#include <iostream>
#include <cmath>

int main(){
  using std::cout;

  double a;

  double b;
  
  double hypothenus;

  cout << "Side a: ";

  std::cin >> a;

  cout << "Side b: ";

  std::cin >> b;

  hypothenus = sqrt(pow(a, 2) + pow(b, 2));

  cout << "Hypothenus: " << hypothenus;

  return 0;
}