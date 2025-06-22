#include "miktzeUtils.h"

int main() {

  char* myChar1 = (char*)new char;
  char* myChar2 = (char*)new char;
  char* myChar3 = (char*)new char;
  int* myInt = (int*)new int;

  printAllMemoryAllocations();

  *myChar1 = 'H';
  *myChar2 = 'i';
  *myChar3 = '!';
  *myInt = 100;
  cout << "Checking values are printed correctly: " << endl
       << "myChar1: " << *myChar1 << endl
       << "myChar2: " << *myChar2 << endl
       << "myChar2: " << *myChar3 << endl
       << "myInt: " << *myInt << endl
       << endl;
  // Deleting first element in list
  delete (myChar1);
  printAllMemoryAllocations();
  // Deleting element from the middle of the list
  delete (myChar3);
  printAllMemoryAllocations();
  // Deleting last element in list
  delete (myInt);
  printAllMemoryAllocations();
  // Deleting remaining allocations
  delete (myChar2);
  printAllMemoryAllocations();
}
