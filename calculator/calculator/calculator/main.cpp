#include "Calculator.h"

#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

int main() {
    cout << Calculator::calculate(0, '+', 0) << endl;
    cout << Calculator::calculate(0, '-', 1) << endl;
    cout << Calculator::calculate(1, '/', 5) << endl;
    cout << Calculator::calculate(2.5, '*', 4) << endl;
    try {
        cout << Calculator::calculate(1, '/', 0) << endl;
    } catch (const DivisionByZero& ex) {
        cerr << ex.what() << endl;
    }
    try {
        cout << Calculator::calculate(1, 'X', 5) << endl;
    } catch (const InvalidOperator& ex) {
        cerr << ex.what() << endl;
    } catch (...) {
    }
}