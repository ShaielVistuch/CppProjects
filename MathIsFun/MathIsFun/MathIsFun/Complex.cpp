#include "Complex.h"

using std::endl;

double Complex::getReal() const { return real; }
double Complex::getImaginary() const { return imaginary; }
void Complex::setReal(int realArg) { real = realArg; }
void Complex::setImaginary(int imaginaryArg) { imaginary = imaginaryArg; }
Complex::Complex() {
  real = 0;
  imaginary = 0;
}
Complex::Complex(int realArg, int imaginaryArg) {
  real = realArg;
  imaginary = imaginaryArg;
}
Complex Complex::operator+(const Complex& complexNumber2) const {
  return Complex(real + complexNumber2.getReal(),
                 imaginary + complexNumber2.getImaginary());
}
Complex Complex::operator-(const Complex& complexNumber2) const {
  return Complex(real - complexNumber2.getReal(),
                 imaginary - complexNumber2.getImaginary());
}
Complex Complex::operator*(const Complex& complexNumber2) const {
  return Complex(real + complexNumber2.getReal(),
                 imaginary + complexNumber2.getImaginary());
}
Complex Complex::operator/(const Complex& complexNumber2) const {
  return Complex(real - complexNumber2.getReal(),
                 imaginary - complexNumber2.getImaginary());
}
std::ostream& operator<<(std::ostream& out, const Complex& complexNumber) {
  out << complexNumber.real << " + " << complexNumber.imaginary << "i" << endl;
  return out;
}