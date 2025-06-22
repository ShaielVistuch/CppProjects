#include "Utils.h"

using std::cerr;
int main() {
  HashTable* myHashTable = new HashTable(10);

  // Testing add function
  myHashTable->add(4);
  myHashTable->printHashTable();

  // Testing getNumberOfElements function
  cout << "Number of elements: " << myHashTable->getNumberOfElements()
       << endl; // Expecting 1
  myHashTable->add(5);
  myHashTable->printHashTable();
  myHashTable->add(6);
  myHashTable->printHashTable();

  // Testing doesExistsKey function
  cout << "Exists value at (key%size) = 4? "
       << (myHashTable->doesExistsKey(4) ? "True" : "False")
       << endl; // expecting true since hash(5) = 4
  cout << "Exists value at (key%size) = 3? "
       << (myHashTable->doesExistsKey(3) ? "True" : "False")
       << endl; // expecting false

  // Testing doesExistsKey function
  cout << "Which value at (key%size) = 4? " << myHashTable->lookupValueByKey(4)
       << endl; // expecting 5 since hash(5) = 4
  try {

    cout << "Which value at (key%size) = 3? "
         << myHashTable->lookupValueByKey(3) << endl; // expecting error thrown
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
  myHashTable->remove(6);
  myHashTable->printHashTable();
  // Testing getNumberOfElements function
  cout << "Number of elements: " << myHashTable->getNumberOfElements()
       << endl; // Expecting 2
  try {
    myHashTable->remove(6);
    myHashTable->printHashTable();
  } catch (std::invalid_argument& ex) {
    cerr << ex.what() << endl;
  }
}
