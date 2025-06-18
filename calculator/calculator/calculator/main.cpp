#include "Calculator.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    cout << Calculator::calculate(0, '+', 0) << endl;
    cout << Calculator::calculate(0, '-', 1) << endl;
    cout << Calculator::calculate(1, '/', 5) << endl;
    cout << Calculator::calculate(2.5, '*', 4) << endl;
    cout << Calculator::calculate(3, 'x', 4) << endl;
    cout << Calculator::calculate(1, 'X', 4) << endl;
    try {
        cout << Calculator::calculate(1, '=', 1);
    } catch (int num) {
        cout << "Error returned code: " << num << endl;
    }
    try {
        cout << Calculator::calculate(4, '/', 0);
    } catch (int num) {
        cout << "Error returned code: " << num << endl;
    }
}