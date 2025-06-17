#include <iostream>
#include <math.h>
#include <string>

int main() {
    using namespace std;
    std::string number;
    cout << "Enter a non-negetive number" << endl;
    cin >> number;
    for (char c : number) {
        if (!isdigit(c)) {
            std::cout << "Please enter a positive number! Exiting..." << endl;
            return 1;
        }
    }
    std::cout << "The square root of " << number << " is "
              << sqrt(stoi(number));
    return 0;
}
