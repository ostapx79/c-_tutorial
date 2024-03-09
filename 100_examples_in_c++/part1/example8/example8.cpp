#include <iostream>

int main() {
    double first, second, product;
    std::cout << "Введите два вещественных числа: ";

    std::cin >> first >> second;
    product = first * second;

    std::cout << "Результат = " << product << std::endl;

    return 0;
}
