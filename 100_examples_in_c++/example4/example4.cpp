#include <iostream>

int main() {
    int divisor, dividend, quotiend, remainder;

    std::cout << "Введите делимое: ";
    std::cin >> dividend;

    std::cout << "Введите делитель: ";
    std::cin >> divisor;

    quotiend = dividend / divisor;
    remainder = dividend % divisor;

    std::cout << "Частное = " << quotiend << std::endl;
    std::cout << "Остаток = " << remainder << std::endl;

    return 0;
}
