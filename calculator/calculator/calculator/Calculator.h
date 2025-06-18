#pragma once

class Calculator {
  public:
    /*
     * @brief:	function to calculate sum of two double numbers
     * @param num1  first number to add
     * @param num2  second number to add
     * @return:	sum of num1 and num2
     */
    double add(double num1, double num2);

    /*
     * @brief:	function to subtract two double numbers
     * @param num1  number to subtract from
     * @param num2  number to subtract
     * @return:	subtraction result
     */
    double subtract(double num1, double num2);

    /*
     * @brief:	function to calculate multipication of two double numbers
     * @param num1  first number to multiply
     * @param num2  second number to multiply
     * @return:	product of num1 and num2
     */
    double multiply(double num1, double num2);

    /*
     * @brief:	function to calculate division of two double numbers
     * @param num1  number to divide
     * @param num2  number to divide by
     * @return:	division result if num2 was not 0
     */
    double divide(double num1, double num2);

    /*
     * @brief:  function that utilizes other functions to calculate addition,
     * division,    multipication or division of two doubles
     * @param num1  first number
     * @param charOperator  first number
     * @param num2  second number
     * @return: result if successful
     */
    double calculate(double num1, char charOperator, double num2);
};