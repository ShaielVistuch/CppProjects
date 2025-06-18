#include "bumbleBeeUtils.h"

#include <iostream>

int main() {
    const int count = 5;
    int arr[count] = {};
    returnArrayOfPrimes(count, arr);
    printArrayContent(arr, count);
    return 0;
}
