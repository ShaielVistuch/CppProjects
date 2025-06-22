#pragma once
// stores value of key + pointer to next key
class Node {
public:
  int value;
  // Address of next node that stores next value with same key (if exists)
  Node* nextNode;
  Node(int inputValue);
};