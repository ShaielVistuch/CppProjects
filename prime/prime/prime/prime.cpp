#include "primeUtils.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int number = -3; number < 11; number++) {
        cout << number << " is "
             << (checkIfPrime(number) ? "Prime" : "Not prime") << endl;
    }
    return 0;
}
