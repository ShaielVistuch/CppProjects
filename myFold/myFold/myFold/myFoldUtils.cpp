#include "myFold.h"

#include <iostream>

void printMultiplicationTable(int maxRows, int maxCols) {
    int result = 0;
    for (int row = 1; row < maxRows; row++) {
        for (int col = 1; col < maxCols; col++) {
            result = row * col;
            if (result < 10) {
                std::cout << result << "\t  ";
            } else {
                std::cout << result << "\t ";
            }
        }
        std::cout << std::endl;
    }
}