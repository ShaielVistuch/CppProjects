#include "primeUtils.h"
#include "bumbleBeeUtils.h"

#include <iostream>

using std::cout;
using std::endl;

void returnArrayOfPrimes(int count, int* ptr) {
    int numberToCheck = 2;
    while (count != 0) {
        if (checkIfPrime(numberToCheck)) {
            *ptr = numberToCheck;
            count--;
            ptr++;
        }
        numberToCheck++;
    }
}

void printArrayContent(int* ptr, int numOfElements) {
    for (int element = 0; element < numOfElements; element++) {
        cout << ptr[element] << "  " << endl;
    }
}