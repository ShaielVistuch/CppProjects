#include "myFoldUtils.h"

#include <iostream>

using std::cout;
using std::endl;

void printMultiplicationTable(unsigned int maxRows, unsigned int maxCols) {
    int result = 0;
    for (int row = 1; row < maxRows; row++) {
        for (int col = 1; col < maxCols; col++) {
            result = row * col;
            if (result < 10) {
                cout << result << "\t  ";
            } else {
                cout << result << "\t ";
            }
        }
        std::cout << std::endl;
    }
}