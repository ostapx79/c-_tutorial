#include <iostream>

int main() {
    char c;

    std::cout << "Введите символ: ";
    std::cin >> c;

    std::cout << "ASCII-значение: " << int(c) << std::endl;

    return 0;
}
