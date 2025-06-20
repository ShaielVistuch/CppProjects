#include "EndOfTheLineUtils.h"

int main() {
  string myStr = "HHHAAA";
  string myStr2 = "ABBA";
  string myStr3 = "ABBA!";
  char valueToXorWith = 'l';
  xorEachCharInString(myStr, valueToXorWith);
  cout << myStr << endl;
  reverseStringOrder(myStr);
  cout << myStr << endl;
  cout << checkIfCapital(myStr) << endl;
  cout << checkIfCapital(myStr2) << endl;
  vector<int> myVec = flatten2Dvector({{1, 2, 3}, {4, 5, 6}});
  copy(myVec.begin(), myVec.end(), std::ostream_iterator<int>(std::cout, " "));
}