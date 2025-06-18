#include "bumbleBeeUtils.h"

#include <iostream>

int main() {
    int count = 0;
    try {
        count = getNumberOfPrimesFromUser();
        int* primeArrayPointer = new int[count]{};
        fillArrayWithPrimes(count, primeArrayPointer);
        printArray(primeArrayPointer, count);
        delete[] primeArrayPointer;
        return 0;
    } catch (std::invalid_argument& ex) {
        return 1;
    }
}
