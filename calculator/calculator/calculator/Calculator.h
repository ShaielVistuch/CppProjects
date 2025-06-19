#pragma once
#include <stdexcept>

class Calculator final {
private:
    /*
    * @brief:	calculate sum of two double numbers
    * @param num1  first number to add
    * @param num2  second number to add
    * @return:	sum of num1 and num2
    */
    static double add(double num1, double num2);

    /*
    * @brief:	subtract two double numbers
    * @param num1  number to subtract from
    * @param num2  number to subtract
    * @return:	subtraction result
    */
    static double subtract(double num1, double num2);

    /*
    * @brief:	calculate multipication of two double numbers
    * @param num1  first number to multiply
    * @param num2  second number to multiply
    * @return:	product of num1 and num2
    */
    static double multiply(double num1, double num2);

    /*
    * @brief:	calculate division of two double numbers
    * @param num1  number to divide
    * @param num2  number to divide by
    * @return:	division result if num2 was not 0
    */
    static double divide(double num1, double num2);

public:
   /*
    * @brief:  utilizes other functions to calculate addition +, subtraction -,
    * multipication *, x, X or division / of two doubles
    * @param num1  first number
    * @param charOperator  first number
    * @param num2  second number
    * @return: result if successful
    */
    static double calculate(double num1, char charOperator, double num2);
};

enum class supportedOperators : char{
    plus = '+',
    minus = '-',
    multiply = '*',
    division = '/'
};

class DivisionByZero : public std::runtime_error {
public:
    DivisionByZero(const std::string& error) : std::runtime_error{error} {
    }
};

class InvalidOperator : public std::invalid_argument {
  public:
    InvalidOperator(const std::string& error) : std::invalid_argument{error} {
    }
};