#pragma once

#include <cmath>
#include <iostream>

using std::ostream;

class Complex final {
private:
  int real;
  int imaginary;
  void setReal(int real);
  void setImaginary(int imaginary);
  double getReal() const;
  double getImaginary() const;

public:
  Complex();
  Complex(int realArg, int imaginaryArg = 0);
  Complex operator+(const Complex&) const;
  Complex operator*(const Complex&) const;
  Complex operator/(const Complex&) const;
  Complex operator-(const Complex&) const;
  Complex& operator=(const Complex&);
  friend ostream& operator<<(ostream& out, const Complex& complexNumber);
};