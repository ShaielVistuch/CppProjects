#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  cout << "Testing default constructor:\n";
  Complex complexNum1 = Complex();
  cout << complexNum1 << endl;

  cout << "Testing parameterized constructor:\n";
  Complex complexNum2 = Complex(1, 2);
  cout << complexNum2 << endl;

  cout << "Testing parameterized constructor to build real numbers:\n";
  Complex complexNum3 = Complex(3);
  cout << complexNum3 << endl;

  cout << "Adding another number for tests:\n";
  Complex complexNum5 = Complex(5, 4);
  cout << complexNum5 << endl;

  cout << "Testing + operator by adding second and fifth number:\n";
  cout << complexNum2 + complexNum5 << endl;
  
}

