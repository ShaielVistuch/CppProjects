#pragma once
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

inline void xorEachCharInString(string& myStr, char valueToXorWith) {
  transform(myStr.begin(), myStr.end(), myStr.begin(),
            [valueToXorWith](char c) { return c ^ valueToXorWith; });
}
inline void reverseStringOrder(string& myStr) {
  reverse(myStr.begin(), myStr.end());
}
inline bool checkIfCapital(string& myStr) {
  return all_of(myStr.begin(), myStr.end(), [](char c) { return isupper(c); });
}
inline vector<int> flatten2Dvector(const vector<vector<int>>& vectorOfVectors) {
  return accumulate(
      vectorOfVectors.begin(), vectorOfVectors.end(), vector<int>{},
      [](vector<int> accumulatedVector,
         const vector<int>& vectorFromVectorOfVectors) {
        accumulatedVector.insert(accumulatedVector.end(),
                                 vectorFromVectorOfVectors.begin(),
                                 vectorFromVectorOfVectors.end());
        return accumulatedVector;
      });
}
