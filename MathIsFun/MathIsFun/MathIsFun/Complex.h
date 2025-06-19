#pragma once

#include <cmath>

class Complex final {
private:
  int real;
  int imaginary;
  void setReal(int real);
  void setImaginary(int imaginary);

public:
  Complex();
  Complex(int realArg, int imaginaryArg = 0);
  double getReal();
  double getImaginary();
  Complex operator+(Complex&);
};