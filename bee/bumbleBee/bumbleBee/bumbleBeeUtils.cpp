#include "bumbleBeeUtils.h"
#include "primeUtils.h"

#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void fillArrayWithPrimes(int count, int* ptr) {
    const int SMALLEST_PRIME = 2;
    int numberToCheck = SMALLEST_PRIME;
    while (count != 0) {
        if (checkIfPrime(numberToCheck)) {
            *ptr = numberToCheck;
            count--;
            ptr++;
        }
        numberToCheck++;
    }
}

void printArray(int* poinerToArray, int numOfElements) {
    cout << "Printing array contents: " << endl;
    for (int i = 0; i < numOfElements; i++) {
        cout << poinerToArray[i] << "  " << endl;
    }
}

int getNumberOfPrimesFromUser() {
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
        cerr << "You have entered an invalid number" << endl
             << ex.what() << endl
             << "Exiting...";
        throw ex;
    }
}