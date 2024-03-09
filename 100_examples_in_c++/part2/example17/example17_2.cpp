#include <iostream>

int main() {
    int n1;
    int n2;

    std::cout << "Введите два числа: ";
    std::cin >> n1 >> n2;

    while (n1 != n2) {
        if (n1 > n2) {
            n1 -= n2;
        } else {
            n2 -= n1;
        }
    }

    std::cout << "НОД = " << n1 << std::endl;
    return 0;
}
