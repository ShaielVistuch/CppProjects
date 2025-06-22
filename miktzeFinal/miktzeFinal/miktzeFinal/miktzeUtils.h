#pragma once

#include <iostream>
using std::cout;
using std::endl;

// stores metadata of allocation, an element in a linkedlist
class Node {
public:
  // number of bytes requested for allocation (not including metadata)
  int numOfBytes;
  // Address of newly created allocation
  void* address;
  // Address of next node that stores next allocation's data
  Node* nextMetadata;
  Node();
};

/*
 * @brief allocating and keeping tracked of allocation metadata
 * @param numOfBytes number of bytes to allocate
 * @return pointer to allocated location
 */
void* operator new(size_t numOfBytes);

/*
 * @brief deleting allocated data
 * @param ptr pointer to allocated location
 */
void operator delete(void* ptr);

/*
 * @brief printing a single allocation (a Node's) metadata
 * @param ptr pointer to Node
 */
void printNodeMetadata(Node* currentNode);

/*
 * @brief printing allocations metadata
 */
void printAllMemoryAllocations();