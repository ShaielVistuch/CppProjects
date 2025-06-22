#include "HashTable.h"

using std::cerr;
int main() {
  HashTable* myHashTable = new HashTable(3);

  // Testing add function
  myHashTable->add(4);
  myHashTable->printFirstElementInEachKey();

  // Testing getNumberOfElements function
  cout << "Number of elements: " << myHashTable->getNumberOfElements()
       << endl; // Expecting 1

  myHashTable->add(5);
  myHashTable->printFirstElementInEachKey();
  myHashTable->add(6);
  myHashTable->printFirstElementInEachKey();

  // Testing doesExistsKey function
  cout << "Exists value at (key%size) = 0? "
       << (myHashTable->doesKeyExists(0) ? "True" : "False")
       << endl; // expecting true since hash(5) = 0
  cout << "Exists value at (key%size) = 3? "
       << (myHashTable->doesKeyExists(3) ? "True" : "False")
       << endl; // expecting false

  // Testing lookupValuesByKey function
  cout << "Which value at (key%size) = 2? " << endl;
  try {
    myHashTable->lookupValuesByKey(2); // expecting error
  } catch (std::invalid_argument& ex) {
    cerr << ex.what() << endl;
  }
  cout << "Which values at (key%size) = 0? " << endl;
  try {
    myHashTable->lookupValuesByKey(0); // expecting 5 and 6
  } catch (std::invalid_argument& ex) {
    cerr << ex.what() << endl;
  }

  try {
    cout << "Which value at (key%size) = 3? " << endl;
    myHashTable->lookupValuesByKey(3);
    // expecting error thrown
  } catch (std::invalid_argument& ex) {
    cerr << ex.what() << endl;
  }

  // Testing doesValueExists function
  cout << "Exists element with value = 6? "
       << (myHashTable->doesValueExists(6) ? "True" : "False")
       << endl; // expecting true since we added 6

  cout << "Exists element with value = 1? "
       << (myHashTable->doesValueExists(1) ? "True" : "False")
       << endl; // expecting false

  // Testing remove function
  myHashTable->remove(5);

  myHashTable->printFirstElementInEachKey();
  // Testing getNumberOfElements function
  cout << "Number of elements: " << myHashTable->getNumberOfElements()
       << endl; // Expecting 2
  try {
    myHashTable->remove(5); // expecting error since already removed
    myHashTable->printFirstElementInEachKey();
  } catch (std::invalid_argument& ex) {
    cerr << ex.what() << endl;
  }
  // Testing add after deleting
  myHashTable->add(5);
  myHashTable->printFirstElementInEachKey();
  try {
    myHashTable->lookupValuesByKey(0); // expecting 6 and 5
  } catch (std::invalid_argument& ex) {
    cerr << ex.what() << endl;
  }
}
