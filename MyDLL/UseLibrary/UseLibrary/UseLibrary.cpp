
#include <iostream>
extern "C" __declspec(dllimport) void PrintHelloWorld();

int main() {
  PrintHelloWorld();
}

