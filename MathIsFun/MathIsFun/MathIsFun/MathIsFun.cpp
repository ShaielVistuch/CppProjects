#include "Complex.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  cout << "Testing default constructor:" << endl;
  Complex complexNum1 = Complex();
  cout << complexNum1 << endl;

  cout << "Testing parameterized constructor:" << endl;
  Complex complexNum2 = Complex(1, 2);
  cout << complexNum2 << endl;

  cout << "Testing parameterized constructor to build real numbers:" << endl;
  Complex complexNum3 = Complex(3);
  cout << complexNum3 << endl;

  cout << "Adding another number for tests:" << endl;
  Complex complexNum5 = Complex(5, 4);
  cout << complexNum5 << endl;

  cout << "Testing + operator by adding second and fifth number:" << endl;
  cout << complexNum2 + complexNum5 << endl;

  cout << "Testing * operator by multiplying second and third number:" << endl;
  cout << complexNum2 * complexNum3 << endl;

  cout << "Testing - operator by adding second and fifth number and "
          "subtracting the fifth number:"
       << endl;
  Complex complexNum6 = complexNum2 + complexNum5 - complexNum5;
  cout << complexNum6 << endl;

  cout << "Testing = operator by comparing result of previous test with second "
          "number:"
       << endl;
  cout << ((complexNum6 == complexNum2)
               ? "Result is same as second number, = returned True"
               : "Result is same as second number, = returned False")
       << endl
       << endl;

  cout << "Testing == operator by comparing assigning second number to first "
          "number adn printing first number:"
          "number:"
       << endl;
  complexNum1 = complexNum2;
  cout << complexNum1 << endl;

  cout << "Testing combinations of real numbers and complex numbers: " << endl;
  cout << "complexNum2 + 2 :" << endl << complexNum2 + 2 << endl;
  cout << "2 + complexNum2 :" << endl << 2 + complexNum2 << endl;
}
