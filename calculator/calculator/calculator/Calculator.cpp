#include "Calculator.h"

#include <iostream>

using std::cout;
using std::endl;

enum ExitValues { 
    DivisionByZero = 1, 
    UnsupportedOperator 
};

double Calculator::add(double num1, double num2) { return num1 + num2; }
double Calculator::subtract(double num1, double num2) { return num1 - num2; }
double Calculator::multiply(double num1, double num2) { return num1 * num2; }
double Calculator::divide(double num1, double num2) {
    try {
        if (!num2) {
            throw 1;
        }
        return (num1 / num2);
    } catch (int num) {
        cout << "Can't divide " << num1 << " by zero!" << endl
             << "Exiting... " << endl;
        exit(DivisionByZero);
    }
}

double Calculator::calculate(double num1, char charOperator, double num2) {
    switch (charOperator) {
    case '+':
        return add(num1, num2);
    case '-':
        return subtract(num1, num2);
    case '/':
        return divide(num1, num2);
    case '*':
        return multiply(num1, num2);
    default: {
        cout << "Unsupported operator: " << charOperator << endl
             << "Exiting..." << endl;
        exit(UnsupportedOperator);
    }
    }
}