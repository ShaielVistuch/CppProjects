#include "HashTable.h"

HashTable::HashTable(size_t sizeInput) {
  numberOfElements = 0;
  size = sizeInput;
  hashTable = new Node* [sizeInput] { nullptr };
}
void HashTable::add(int valueToAdd) {
  Node* currentNode =
      hashTable[((((hash<std::string>{}(to_string(valueToAdd)))) % size))];
  if (currentNode != nullptr) {
    while (currentNode->nextNode != nullptr) {
      currentNode = currentNode->nextNode;
    }
    currentNode->nextNode = new Node(valueToAdd);
  } else {

    hashTable[((((hash<std::string>{}(to_string(valueToAdd)))) % size))] =
        new Node(valueToAdd);
  }
  numberOfElements++;
};
void HashTable::lookupValuesByKey(int key) {
  if (keyNotValid(key)) {
    throw std::invalid_argument("Entered a key that does not exists.");
  }
  Node* currentNode = hashTable[key];
  if (currentNode == nullptr) {
    throw std::invalid_argument(
        "Entered a key that does not contain anything yet.");
  }
  while (currentNode != nullptr) {
    cout << currentNode->value << endl;
    currentNode = currentNode->nextNode;
  }
  cout << endl;
  return;
};
bool HashTable::doesValueExists(int value) {
  Node* currentNode =
      hashTable[((((hash<std::string>{}(to_string(value)))) % size))];
  if (currentNode != nullptr) {
    if (currentNode->value == value) {
      return true;
    } else {

      while (currentNode->nextNode != nullptr) {
        if (currentNode->value == value) {
          return true;
        }
        currentNode = currentNode->nextNode;
      }
    }
  }
  if (currentNode->value == value) {
    return true;
  }
  return false;
};
bool HashTable::doesKeyExists(int key) {
  if (keyNotValid(key)) {
    return false;
  }
  if (hashTable[key] != NULL) {
    return true;
  }
  return false;
};
void HashTable::remove(int valueToRemove) {
  int index = ((((hash<std::string>{}(to_string(valueToRemove)))) % size));
  Node* currentNode = hashTable[index];
  Node* previousNode = hashTable[index];

  // If element to delete is the first element in the list
  if (currentNode->value == valueToRemove) {
    numberOfElements--;
    hashTable[index] = currentNode->nextNode;
    free(currentNode);
    currentNode = nullptr;
    return;
  }

  if (hashTable[index] != nullptr) {
    while (currentNode->nextNode != nullptr) {
      if (currentNode->value == valueToRemove) {
        numberOfElements--;
        previousNode->nextNode = currentNode->nextNode;
        free(currentNode);
        currentNode = nullptr;
        return;
      }
      previousNode = currentNode;

      currentNode = currentNode->nextNode;
    }
  }
  // In case element to be deleted is last in linkedlist
  if (currentNode->value == valueToRemove) {
    numberOfElements--;
    previousNode->nextNode = currentNode->nextNode;
    free(currentNode);
    currentNode = nullptr;
    return;
  }
  throw std::invalid_argument("Entered a value that does not exists.");
};
void HashTable::printFirstElementInEachKey() {
  cout << endl;
  for (int i = 0; i < size; i++) {
    cout << ((hashTable[i] == nullptr) ? "nullptr"
                                       : to_string(hashTable[i]->value))
         << endl;
  }
}
int HashTable::getNumberOfElements() {
  return numberOfElements;
}

bool HashTable::keyNotValid(int key) {
  return ((key >= size));
}