#include <iostream>

int main() {

    for(int i = 1; i <= 10; ++i) {
        for(int j = 1; j <= 9; ++j) {
            std::cout.width(2);
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
