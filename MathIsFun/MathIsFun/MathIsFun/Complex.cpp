#include "Complex.h"
double Complex::getReal() { return real; }
double Complex::getImaginary() { return imaginary; }
void Complex::setReal(int realArg) { real = realArg; }
void Complex::setImaginary(int imaginaryArg) { imaginary = imaginaryArg; }
Complex::Complex() {
  real = 0;
  imaginary = 0;
}
Complex::Complex(int realArg, int imaginaryArg) {
  real = real;
  imaginary = imaginary;
}
Complex Complex::operator+(Complex& complexNumber2) {
  return Complex(real + complexNumber2.getReal(),
                 imaginary + complexNumber2.getImaginary());
}