#include <iostream>
#include <signal.h>
#include <unistd.h>

using std::cout;
using std::endl;

void signalHandeler(int signal) {
  switch (signal) {}
  if (signal == SIGINT) {
    cout << "Recieved SIGINT (code " << signal << ")" << endl;
    exit(SIGINT);
  } else if (signal == SIGTERM) {
    cout << "Recieved SIGTERM (code " << signal << ")" << endl;
    exit(SIGTERM);
  } else if (signal == SIGUSR1) {
    cout << "Joanne Rowling, known by her pen name J. K. Rowling, is a British "
            "author and philanthropist. She is the author of Harry Potter, a "
            "seven-volume fantasy novel series published from 1997 to 2007."
         << endl;
  } else if (signal == SIGUSR2) {
    cout << "John Ronald Reuel Tolkien was an English writer and philologist. "
            "He was the author of the high fantasy works The Hobbit and The "
            "Lord of the Rings. From 1925 to 1945 Tolkien was the Rawlinson "
            "and Bosworth Professor of Anglo-Saxon and a Fellow of Pembroke "
            "College, both at the University of Oxford. "
         << endl;
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