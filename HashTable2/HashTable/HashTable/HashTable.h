#pragma once
#include "Node.h"
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
  Node** hashTable;
  HashTable(size_t size);
  void add(int valueToAdd);
  void lookupValuesByKey(int key);
  bool doesKeyExists(int key);
  bool doesValueExists(int value);
  void remove(int valueToRemove);
  void printFirstElementInEachKey();
  int getNumberOfElements();
  bool keyNotValid(int key);
};
