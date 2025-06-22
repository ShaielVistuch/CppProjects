#include "miktzeUtils.h"

const char* PRINTING_STR = "--------------------------------------";
Node* globalFirstNodePtr;
Node* globalLastNodePtr;

// Node constructor
Node::Node() {
  numOfBytes = 0;
  void* address = NULL;
  Node* nextMetadata = (Node*)malloc(sizeof(Node));
}

void* operator new(size_t numOfBytes) {
  cout << "Calling my new operator" << std::endl;
  static int numberOfAllocations = 0;
  void* ptr = malloc(numOfBytes + sizeof(Node));
  if (ptr != NULL) {
    numberOfAllocations++;
    Node* currentNode = (Node*)ptr;
    currentNode->numOfBytes = numOfBytes;
    currentNode->address = ptr;
    currentNode->nextMetadata = nullptr;
    if (numberOfAllocations == 1) {
      globalFirstNodePtr = currentNode;
    } else {
      globalLastNodePtr->nextMetadata = currentNode;
    }
    globalLastNodePtr = currentNode;
    ptr = ((char*)ptr) + sizeof(Node);
  }

  return (void*)ptr;
}

void operator delete(void* ptr) {

  // Moving back sizeof(Node) in order to free all allocated space (including
  // space storing metadata)
  ptr = ((char*)ptr) - sizeof(Node);

  cout << "Calling my delete operator" << std::endl;

  Node* currentNode = globalFirstNodePtr;
  Node* previousNode = globalFirstNodePtr;

  // If element to delete is the only one in the list
  if (currentNode->nextMetadata == nullptr) {
    globalFirstNodePtr = nullptr;
    globalLastNodePtr = nullptr;
    free(ptr);
    return;
  }
  // If element to delete is the first element in the list
  if (currentNode->address == ptr) {
    globalFirstNodePtr = currentNode->nextMetadata;
    free(ptr);
    return;
  }

  while (currentNode->address != ptr) {
    previousNode = currentNode;
    currentNode = currentNode->nextMetadata;
  }
  // If element to delete is the last one in the list
  if (currentNode->nextMetadata == nullptr) {
    globalLastNodePtr = previousNode;
  }
  previousNode->nextMetadata = currentNode->nextMetadata;
  free(ptr);
}

void printNodeMetadata(Node* currentNode) {
  cout << endl;
  cout << "Current Node being printed is located in: " << currentNode << endl;
  cout << "Allocated: " << currentNode->numOfBytes
       << " bytes at address: " << currentNode->address << endl
       << "Address of next node that stores next allocation's data is: "
       << currentNode->nextMetadata << endl;
}

void printAllMemoryAllocations() {
  cout << endl
       << endl
       << PRINTING_STR << "Printing all allocations" << PRINTING_STR << endl;

  if (globalFirstNodePtr != nullptr) {
    Node* currentNode = globalFirstNodePtr;
    while (currentNode->nextMetadata != nullptr) {
      printNodeMetadata(currentNode);
      currentNode = currentNode->nextMetadata;
    }
    printNodeMetadata(currentNode);
  }
  cout << PRINTING_STR << "Done printing all allocations" << PRINTING_STR
       << endl
       << endl
       << endl;
}
