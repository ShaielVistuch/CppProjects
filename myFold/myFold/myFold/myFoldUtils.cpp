#include "myFoldUtils.h"

#include <iostream>

using std::cout;
using std::endl;

void printMultiplicationTable(unsigned int maxRows, unsigned int maxCols) {
    int result = 0;
    for (int row = 1; row < maxRows + 1; row++) {
        for (int col = 1; col < maxCols + 1; col++) {
            result = row * col;
            if (result < 10) {
                cout << result << "\t  ";
            } else {
                cout << result << "\t ";
            }
        }
        cout << endl;
    }
}