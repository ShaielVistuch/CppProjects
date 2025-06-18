#include "bumbleBeeUtils.h"

#include <iostream>

int main() {
    int count = 5;
    count = getIntegerFromUser();
    int* primeArrayPointer = (int*)(malloc(count * sizeof(int)));
    returnArrayOfPrimes(count, primeArrayPointer);
    printArrayContent(primeArrayPointer, count);
    return 0;
}
