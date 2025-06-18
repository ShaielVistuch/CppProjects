#include "bumbleBeeUtils.h"
#include "primeUtils.h"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void returnArrayOfPrimes(int count, int* ptr) {
    const int smallestPrimeNumber = 2;
    int numberToCheck = smallestPrimeNumber;
    while (count != 0) {
        if (checkIfPrime(numberToCheck)) {
            *ptr = numberToCheck;
            count--;
            ptr++;
        }
        numberToCheck++;
    }
}

void printArrayContent(int* poinerToArray, int numOfElements) {
    cout << "Printing array contents: " << endl;
    for (int element = 0; element < numOfElements; element++) {
        cout << poinerToArray[element] << "  " << endl;
    }
}

int getIntegerFromUser() {
    string inputNumber = "";
    cout << "Enter number of prime numbers you wish to find: " << endl;
    cin >> inputNumber;
    try {
        int numberOfPrimes = stoi(inputNumber);
        if (numberOfPrimes < 0) {
            throw std::invalid_argument("Number entered is negative.");
        }
        return numberOfPrimes;
    } catch (std::invalid_argument& ex) {
        cout << "You have entered an invalid number" << endl
             << ex.what() << endl << "Exiting...";
        exit(1);
    }
}