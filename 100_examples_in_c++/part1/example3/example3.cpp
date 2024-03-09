#include <iostream>

int main() {
    int first, second, sum;

    std::cout << "Введите два целых числа!\n";

    std::cout << "Введите первое число: ";
    std::cin >> first;

    std::cout << "Введите второе число: ";
    std::cin >> second;

    sum = first + second;

    std::cout << first << " + " << second << " = " << sum << std::endl;
    return 0;
}
