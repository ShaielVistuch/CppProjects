#include "bumbleBeeUtils.h"

#include <iostream>

using std::cerr;
using std::endl;

int main() {
    int count = 0;
    try {
        count = getNumberOfPrimesFromUser();
        int* primeArrayPointer = new int[count]{};
        if (!primeArrayPointer) {
            cerr << "Memory allocation failed." << endl;
            return 2;
        }
        fillArrayWithPrimes(count, primeArrayPointer);
        printArray(primeArrayPointer, count);
        delete[] primeArrayPointer;
        return 0;
    } catch (std::exception& ex) {
        cerr << ex.what() << endl;
    }
    return 1;
}
