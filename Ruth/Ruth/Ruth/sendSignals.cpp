#include <iostream>
#include <signal.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int PID;
  string signal;
  cout << "Enter PID: " << endl;
  cin >> PID;
  while (true) {
    cout << "Which signal you wish to send? (SIGINT, SIGTERM, SIGUSR1, or "
            "SIGUSR2)"
         << endl;
    cin >> signal;
    if (signal == "SIGINT") {
      kill(PID, SIGINT);
      exit(0);
    } else if (signal == "SIGTERM") {
      kill(PID, SIGTERM);
      exit(0);
    } else if (signal == "SIGUSR1") {
      kill(PID, SIGUSR1);
    } else if (signal == "SIGUSR2") {
      kill(PID, SIGUSR2);
    } else {
      cout << "Signal entered is invalid or not yet supported. Please type:  "
              "SIGINT, SIGTERM, SIGUSR1, or SIGUSR2."
           << endl;
    }
  }
}