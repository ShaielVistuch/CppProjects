#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  /// Question 1:
  std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4};

  /// Question 2:
  cout << count(myVector.begin(), myVector.end(), 4) << endl;

  /// Question 3:
  cout << count_if(myVector.begin(), myVector.end(), [](int i) {
    return i > 4 == true;
  }) << endl;

  /// Question 4:
  myVector.erase(remove(myVector.begin(), myVector.end(), 4), myVector.end());

  /// Question 5:
  copy(myVector.begin(), myVector.end(),
       std::ostream_iterator<int>(std::cout, " "));

  /// Question 6:
  std::vector<int> myVector2 = {};

  // Checking Answer 6:
  cout << endl << "Size of vector: " << myVector2.size() << endl;

  /// Question 7:
  transform(myVector.begin(), myVector.end() - 1, myVector.begin() + 1,
            std::back_inserter(myVector2),
            [](int x, int y) { return (y - x); });

  /// Question 8:
  copy(myVector2.begin(), myVector2.end(),
       std::ostream_iterator<int>(std::cout, " "));

  /// Question 9:
  cout << endl << accumulate(myVector2.begin(), myVector2.end(), 0) << endl;
}
