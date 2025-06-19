#include "Complex.h"

using std::endl;

double Complex::getReal() const { return real; }
double Complex::getImaginary() const { return imaginary; }
void Complex::setReal(double realArg) { real = realArg; }
void Complex::setImaginary(double imaginaryArg) { imaginary = imaginaryArg; }
Complex::Complex() {
  real = 0;
  imaginary = 0;
}
Complex::Complex(double realArg, double imaginaryArg) {
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
  return Complex(real * complexNumber2.getReal() -
                     imaginary * complexNumber2.getImaginary(),
                 real * complexNumber2.getImaginary() +
                     imaginary * complexNumber2.getReal());
}
Complex& Complex::operator=(const Complex& complexNumber2) {
  if (&complexNumber2 == this) {
    return *this;
  }
  real = complexNumber2.getReal();
  imaginary = complexNumber2.getImaginary();
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Complex& complexNumber) {
  out << complexNumber.real << " + " << complexNumber.imaginary << "i" << endl;
  return out;
}
bool Complex::operator==(const Complex& complexNumber2) const {
  if (!(real == complexNumber2.getReal())) {
    return false;
  } else if (imaginary == complexNumber2.getImaginary()) {
    return true;
  }
  return false;
}
bool Complex::operator==(double real2) const {
  if (!(real == real2)) {
    return false;
  }
  return true;
}
Complex Complex::operator+(const double& realNumber) const {
  return Complex(real + realNumber, imaginary);
}
Complex Complex::operator-(const double& realNumber) const {
  return Complex(real - realNumber, imaginary);
}
Complex Complex::operator*(const double& realNumber) const {
  return Complex(real * realNumber, imaginary * realNumber);
}
Complex operator+(double realNumber, const Complex& complexNumber) {
  return Complex(complexNumber.getReal() + realNumber,
                 complexNumber.getImaginary());
}
Complex operator-(double realNumber, const Complex& complexNumber) {
  return Complex(realNumber - complexNumber.getReal(),
                 -complexNumber.getImaginary());
}
Complex operator*(double realNumber, const Complex& complexNumber) {
  return Complex(complexNumber.getReal() * realNumber,
                 complexNumber.getImaginary() * realNumber);
}