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
  Complex();
  Complex(double realArg, double imaginaryArg = 0);
  double getReal() const;
  double getImaginary() const;
  Complex operator+(const Complex&) const;
  Complex operator*(const Complex&) const;
  Complex operator-(const Complex&) const;
  Complex& operator=(const Complex&);
  bool operator==(const Complex& complexNumber2) const;
  bool operator==(double) const;
  friend ostream& operator<<(ostream& out, const Complex& complexNumber);
  Complex operator+(const double&) const;
  Complex operator*(const double&) const;
  Complex operator-(const double&) const;
  friend Complex operator+(double realNumber, const Complex& complexNumber);
  friend Complex operator-(double realNumber, const Complex& complexNumber);
  friend Complex operator*(double realNumber, const Complex& complexNumber);
};