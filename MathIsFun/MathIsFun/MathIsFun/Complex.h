#pragma once

#include <cmath>
#include <iostream>

using std::ostream;

class Complex final {
private:
  double real;
  double imaginary;
  void setReal(double real);
  void setImaginary(double imaginary);

public:
  /*
   * @brief	default constractor, initializes real & imaginary to 0
   * @return (implicitly) Complex object
   */
  Complex();

  /*
   * @brief	parameterized constractor, initializes real & imaginary to 0
   * @return (implicitly)Complex object
   */
  Complex(double realArg, double imaginaryArg = 0);

  /*
   * @return value of the real field of the complex object
   */
  double getReal() const;

  /*
   * @return value of the imaginary field of the complex object
   */
  double getImaginary() const;

  /*
   * @brief:	operator + overloading to allow adding two Complex Objects
   * @param Complex object
   * @return Complex object
   */
  Complex operator+(const Complex&) const;

  /*
   * @brief:	operator * overloading to allow multiplying two Complex Objects
   * @param Complex object
   * @return Complex object
   */
  Complex operator*(const Complex&) const;

  /*
   * @brief:	operator - overloading to allow subtracting two Complex Objects
   * @param Complex object
   * @return Complex object
   */
  Complex operator-(const Complex&) const;

  /*
   * @brief:	operator = overloading to allow assignment of two Complex
   *			objects
   * @param Complex object
   * @return the complex number with new value
   */
  Complex& operator=(const Complex&);

  /*
   * @brief:	operator == overloading to allow comparing of Complex object
   * to Complex object
   * @param complexNumber2 the Complex object
   * @return true if same value, false otherwise
   */
  bool operator==(const Complex& complexNumber2) const;

  /*
   * @brief:	operator == overloading to allow comparing of real double to a
   * Complex object
   * @param double
   * @return true if same value, false otherwise
   */
  bool operator==(double) const;

  /*
   * @brief:	operator << overloading to allow an easy print of Complex object
   * @param ostream to print to
   * @param complexNumber object to print
   * @return ostream operator with printing format of the complex object
   */
  friend ostream& operator<<(ostream& out, const Complex& complexNumber);

  /*
   * @brief:	operator + overloading to allow adding Complex + double
   * @param double
   * @return Complex object
   */
  Complex operator+(const double&) const;

  /*
   * @brief:	operator * overloading to allow multiplying Complex * double
   * @param double
   * @return Complex object
   */
  Complex operator*(const double&) const;

  /*
   * @brief:	operator - overloading to allow subtracting Complex - double
   * @param double
   * @return Complex object
   */
  Complex operator-(const double&) const;

  /*
   * @brief:	operator = overloading to allow assignment of double to a
   * Complex
   * @param double to assign
   * @return the complex number with new value
   */
  Complex& operator=(const double);

  /*
   * @brief:	operator + overloading to allow subtracting double - complex
   * @param realNumber the double
   * @param complexNumber the Complex object
   * @ return Complex object
   */
  friend Complex operator+(double realNumber, const Complex& complexNumber);

  /*
   * @brief:	operator - overloading to allow subtracting double - complex
   * @param realNumber the double
   * @param complexNumber the Complex object
   * @return Complex object
   */
  friend Complex operator-(double realNumber, const Complex& complexNumber);

  /*
   * @brief:	operator * overloading to allow multiplying double * complex
   * @param realNumber the double
   * @param complexNumber the Complex object
   * @return Complex object
   */
  friend Complex operator*(double realNumber, const Complex& complexNumber);
};