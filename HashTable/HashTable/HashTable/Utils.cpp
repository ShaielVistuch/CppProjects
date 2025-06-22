#include "Utils.h"

HashTable::HashTable(size_t sizeInput) {
  numberOfElements = 0;
  size = sizeInput;
  hashTable = new int[sizeInput]{NULL};
}
void HashTable::add(int valueToAdd) {
  hashTable[((((hash<std::string>{}(to_string(valueToAdd)))) % size))] =
      valueToAdd;
  numberOfElements++;
};
int HashTable::lookupValueByKey(int key) {
  if (doesExistsKey(key)) {
    return hashTable[key];
  }
  throw std::invalid_argument("Entered a value that does not exists");
};
bool HashTable::doesValueExists(int value) {
  if (hashTable[((((hash<std::string>{}(to_string(value)))) % size))] ==
      value) {
    return true;
  }
  return false;
};
bool HashTable::doesExistsKey(int key) {
  if (hashTable[key] != NULL) {
    return true;
  }
  return false;
};
void HashTable::remove(int valueToRemove) {
  int index = ((((hash<std::string>{}(to_string(valueToRemove)))) % size));
  if (hashTable[index] != NULL) {
    hashTable[index] = NULL;
    numberOfElements--;
    return;
  }
  throw std::invalid_argument("Entered a value that does not exists");
};
void HashTable::printHashTable() {
  cout << endl;
  for (int i = 0; i < size; i++) {
    cout << hashTable[i] << endl;
  }
}
int HashTable::getNumberOfElements() {
  return numberOfElements;
}