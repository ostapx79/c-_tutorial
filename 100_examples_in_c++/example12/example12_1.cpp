#include <iostream>

int main() {
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << year << " високосный";
            } else {
                std::cout << year << " не високосный";
            }
        } else {
            std::cout << year << " високосный";
        }
    } else {
        std::cout << year << " не високосный";
    }

    std::cout << std::endl;

    return 0;
}
