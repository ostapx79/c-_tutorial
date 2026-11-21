#include <iostream>

int main() {

    std::string s;

    std::cout <<  "Введите строку: ";
    getline(std::cin, s);

    for (int i = 0; s[i] != '\0'; i++);
    std::cout << "Длина: " << i << std::endl;

    return 0;
}
