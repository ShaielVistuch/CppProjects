#include "Calculator.h"

#include <iostream>

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
        throw DivisionByZero("Division by zero is not allowed.");
    }
    return (num1 / num2);
}


double Calculator::calculate(double num1, char charOperator, double num2) {
    switch (charOperator) {
    case (static_cast<char>(supportedOperators::plus)):
        return add(num1, num2);
    case (static_cast<char>(supportedOperators::minus)):
        return subtract(num1, num2);
    case (static_cast<char>(supportedOperators::division)):
        return divide(num1, num2);
    case (static_cast<char>(supportedOperators::multiply)):
        return multiply(num1, num2);
    default: {
        throw InvalidOperator("Unsupported operator.");
    }
    }
}
