#include "FunctorGamesUtils.h"

int main() {
  cout << "--------------------------------------Testing "
          "Q1--------------------------------------"
       << endl;
  isPrime primeFunctor;
  for (int number = -3; number < 11; number++) {
    cout << number << " is "
         << ((primeFunctor(number)) ? "Prime." : "Not prime.") << endl;
  }
  cout << "--------------------------------------Testing "
          "Q2--------------------------------------"
       << endl;
  isFirstLargerThanSecond isFirstLargerThanSecondFunctor;
  pair<double, double> p1 = {2, 3};
  pair<double, double> p2 = {12, 3};
  cout << ((isFirstLargerThanSecondFunctor(p1))
               ? "First number of pair is larger."
               : "First number of pair is equal or smaller than second number "
                 "of pair.")
       << endl;
  cout << ((isFirstLargerThanSecondFunctor(p2))
               ? "First number of pair is larger."
               : "First number of pair is equal or smaller than second number "
                 "of pair.")
       << endl;
  cout << "--------------------------------------Testing "
          "Q3--------------------------------------"
       << endl;
  isDividedByN isDividedByTen(10);
  cout << ((isDividedByTen(20))
               ? "Number can be divided by ten without a remainder."
               : "Number can not be divided by ten without a remainer.")
       << endl;
  cout << ((isDividedByTen(21))
               ? "Number can be divided by ten without a remainder."
               : "Number can not be divided by ten without a remainer.")
       << endl;
  cout << "--------------------------------------Testing "
          "Q4--------------------------------------"
       << endl;
  isOddNumber isOddNumberFunctor;
  cout << ((isOddNumberFunctor(20)) ? "Number is odd." : "Number is even.")
       << endl;
  cout << ((isOddNumberFunctor(21)) ? "Number is odd." : "Number is even.")
       << endl;
}