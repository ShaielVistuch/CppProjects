#include <iostream>
#include <signal.h>
#include <unistd.h>

using std::cout;
using std::endl;

void signalHandeler(int signal) {
  switch (signal) {
  case SIGINT:
  case SIGTERM:
    printf("Terminating the program (recieved signal #%d)", signal);
    exit(0);
  case SIGUSR1:
    printf("Joanne Rowling, known by her pen name J. K. Rowling, is a British "
           "author and philanthropist. She is the author of Harry Potter, a "
           "seven-volume fantasy novel series published from 1997 to 2007.");
    break;
  case SIGUSR2:
    printf("John Ronald Reuel Tolkien was an English writer and philologist. "
           "He was the author of the high fantasy works The Hobbit and The "
           "Lord of the Rings. From 1925 to 1945 Tolkien was the Rawlinson and "
           "Bosworth Professor of Anglo-Saxon and a Fellow of Pembroke "
           "College, both at the University of Oxford.");
    break;
  }
}

int main() {
  signal(SIGINT, signalHandeler);
  signal(SIGTERM, signalHandeler);
  signal(SIGUSR1, signalHandeler);
  signal(SIGUSR2, signalHandeler);
  while (true) {
    printf("I am alive\n");
    sleep(2);
  }
}