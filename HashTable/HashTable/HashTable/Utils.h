#pragma once

#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::hash;
using std::map;
using std::string;
using std::to_string;
using std::vector;

class HashTable {
public:
  int numberOfElements;
  size_t size;
  int* hashTable;
  HashTable(size_t size);
  void add(int valueToAdd);
  int lookupValueByKey(int key);
  bool doesExistsKey(int key);
  bool doesValueExists(int value);
  void remove(int valueToRemove);
  void printHashTable();
  int getNumberOfElements();
};