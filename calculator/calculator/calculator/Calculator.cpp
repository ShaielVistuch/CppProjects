#include "Calculator.h"

#include <iostream>

using std::cerr;
using std::endl;

double Calculator::add(double num1, double num2) { 
    return num1 + num2; 
}

double Calculator::subtract(double num1, double num2) { 
    return num1 - num2; 
}

double Calculator::multiply(double num1, double num2) { 
    return num1 * num2; 
}

double Calculator::divide(double num1, double num2) {
    if (num2 == 0) {
        cerr << "Can't divide by zero!" << endl;
        throw(static_cast<int>(ExitValue::DivisionByZero));
    }
    return (num1 / num2);
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
    case 'x':
    case 'X':
        return multiply(num1, num2);
    default: {
        cerr << "Unsupported operator: " << charOperator << endl;
        throw(static_cast<int>(ExitValue::UnsupportedOperator));
    }
    }
}
