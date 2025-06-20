#pragma once
#include <cmath>
#include <iostream>
#include <utility>
using std::cout;
using std::endl;
using std::pair;

class isPrime {
public:
  isPrime() {
  }
  /*
   * @brief: allow calling object,checks if @param is a prime number
   * @param number: number to check if prime
   * @return: true if @param is prime, false o.w.
   */
  bool operator()(int number);
};

class isFirstLargerThanSecond {
public:
  isFirstLargerThanSecond() {
  }
  /*
   * @brief: allow calling object, checks if left parameter of pair is larger
   * than right parameter
   * @param p: pair to check
   * @return: true if left parameter of pair is larger than right parameter,
   * false o.w.
   */
  inline bool operator()(pair<double, double> p) {
    return (p.first > p.second ? true : false);
  }
};

class isDividedByN {
private:
  double numToDivideBy;

public:
  isDividedByN(double n) {
    numToDivideBy = n;
  }
  /*
   * @brief: allow calling object, checks if result of division by a chosen
   * number have a remainer
   * @param inputNum: num to check if can be divided
   * @return: true if @param can be divided by numToDivideBy without a remainer,
   * false o.w.
   */
  inline bool operator()(double inputNum) {
    return (fmod(inputNum, numToDivideBy) == 0);
  }
};

class isOddNumber {
public:
  isOddNumber() {
  }
  /*
   * @brief: allow calling object, checks if number is odd
   * @param inputNum: number to check
   * @return: true if @param is odd, false o.w
   */
  inline bool operator()(int inputNum) {
    return (inputNum % 2 != 0);
  }
};
