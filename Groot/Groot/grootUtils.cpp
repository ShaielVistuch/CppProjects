#include "groot.h"

#include <cmath>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

double getNonNegativeNumberFromUser() {
    string number = "";
    cout << "Enter a non-negative number" << endl;
    cin >> number;
    int dotCounter = 0;
    for (char c : number) {
        if (!isdigit(c) and c != '.') {
            cout << "Please enter a non-negative number! Exiting..." << endl;
            exit(1);
        } else if (c == '.') {
            if (dotCounter) {
                cout << "Please enter a non-negative number! Exiting..."
                     << endl;
                exit(1);
            }
            dotCounter++;
        }
    }
    return stod(number);
}