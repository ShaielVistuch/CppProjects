#include "groot.h"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

double getNonNegativeNumberFromUser() {
    const string wrongInput = "Please enter a non-negative number! Exiting...";
    string number = "";
    cout << "Enter a non-negative number" << endl;
    cin >> number;
    int dotCounter = 0;
    for (char c : number) {
        if (!isdigit(c) and c != '.') {
            cout << wrongInput << endl;
            exit(1);
        } else if (c == '.') {
            if (dotCounter) {
                cout << wrongInput << endl;
                exit(1);
            }
            dotCounter++;
        }
    }
    return stod(number);
}