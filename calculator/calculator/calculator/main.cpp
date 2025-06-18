#include "Calculator.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    Calculator myCalculator{};
    cout << myCalculator.calculate(0, '+', 0) << endl;
    cout << myCalculator.calculate(0, '+', 1) << endl;
    cout << myCalculator.calculate(1, '/', 5) << endl;
    cout << myCalculator.calculate(2.5, '*', 4) << endl;

    // Causes program to exit
    cout << myCalculator.calculate(1, '=', 1);
    cout << myCalculator.calculate(4, '/', 0);
}