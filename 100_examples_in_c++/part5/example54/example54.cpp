#include <iostream>

int main() {

    char line[150];
    int total;
    int digits;
    int spaces;

    total = digits = spaces = 0;

    std::cout << "Введите строку: ";
    std::cin.getline(line, 150);

    for (int i = 0; line[i] != '\0'; i++) {
        ++total;

        if (line[i] >= '0' && line[i] <= '9') {
            ++digits;
        } else if (line[i] == ' ') {
            ++spaces;
        }
    }

    std::cout << "Цифры: " << digits << std::endl;
    std::cout << "Пробел: " << spaces << std::endl;
    std::cout << "Всего: " << total << std::endl;

    return 0;
}
