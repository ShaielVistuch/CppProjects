#include "groot.h"
#include <cmath>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

double getNonNegativeNumberFromUser() {
    string number;
    cout << "Enter a non-negetive number" << endl;
    cin >> number;
    int dot_counter = 0;
    for (char c : number) {
        if (!isdigit(c) and c != '.') {
            cout << "Please enter a non-negative number! Exiting..." << endl;
            return 1;
        } else if (c == '.') {
            if (dot_counter) {
                cout << "Please enter a non-negative number! Exiting..."
                     << endl;
                return 1;
            } else {
                dot_counter++;
            }
        }
    }
    return stod(number);
}