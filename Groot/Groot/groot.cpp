#include "groot.h"

#include <cmath>
#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main() {
    double number = getNonNegativeNumberFromUser();
    cout << "The square root of " << number << " is " << sqrt(number);
    return 0;
}
