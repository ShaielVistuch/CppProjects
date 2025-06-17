#include "primeUtils.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int number = 7;
    cout << number << " is " << (checkIfPrime(number) ? "Prime" : "Not prime")
         << endl;
    number = 0;
    cout << number << " is " << (checkIfPrime(number) ? "Prime" : "Not prime")
         << endl;
    number = 1;
    cout << number << " is " << (checkIfPrime(number) ? "Prime" : "Not prime")
         << endl;
    number = 9;
    cout << number << " is " << (checkIfPrime(number) ? "Prime" : "Not prime")
         << endl;
    number = 10;
    cout << number << " is " << (checkIfPrime(number) ? "Prime" : "Not prime")
         << endl;
    number = -2;
    cout << number << " is " << (checkIfPrime(number) ? "Prime" : "Not prime")
         << endl;
    return 0;
}
