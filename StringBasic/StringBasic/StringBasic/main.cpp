#include "StringBasic.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
  StringBasic sb1 = StringBasic("Hi");
  cout << "BasicString #1: " << sb1 << endl;
  StringBasic sb2 = StringBasic("Hello");
  cout << "BasicString #2: " << sb2 << endl;
  cout << endl
       << "Testing == operator by comparing BasicString #1 to BasicString #2:"
       << endl;
  cout << ((sb1 == sb2) ? "Strings are the same, == returned True"
                        : "Strings are differet, == returned False")
       << endl;
  cout << endl
       << "Testing = operator by assigning BasicString #2 to BasicString #1:"
       << endl;
  sb1 = sb2;
  cout << "BasicString #1 is now: " << sb1 << endl;
  cout << endl
       << "Testing again == operator by comparing BasicString #1 to "
          "BasicString #2:"
       << endl;
  cout << ((sb1 == sb2) ? "Strings are the same, == returned True"
                        : "Strings are differet, == returned False")
       << endl
       << endl;
  cout << "Testing == operator by comparing BasicString #2 to \"Bonjour\": "
       << endl;
  cout << ((sb2 == "Bonjour") ? "Strings are the same, == returned True"
                              : "Strings are differet, == returned False")
       << endl
       << endl;
  cout << "Testing == operator by comparing \"Hello\" to BasicString #2:"
       << endl;
  cout << (("Hello" == sb2) ? "Strings are the same, == returned True"
                            : "Strings are differet, == returned False")
       << endl
       << endl;
  cout << "Testing = operator by assigning \"Adios!\" to BasicString #1:"
       << endl;
  sb1 = "Adios!";
  cout << "BasicString #1 is now: " << sb1 << endl;
}