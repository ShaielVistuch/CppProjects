#include "bumbleBeeUtils.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    const int count = 5;
    int arr[count] = {};
    returnArrayOfPrimes(count, arr);
    printArrayContent(arr, count);
    return 0;
}
