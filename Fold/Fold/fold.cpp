#include <iostream>

int main() {
    const int max_cols = 12;
    const int max_rows = 20;
    int result = 0;
    for (int row = 1; row < max_rows; row++) {
        for (int col = 1; col < max_cols; col++) {
            result = row * col;
            if (result < 10) {
                std::cout << result << "\t  ";
            } else {
                std::cout << result << "\t ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
