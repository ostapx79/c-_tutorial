#include <iostream>

int main() {

    int i;
    std::string s;

    std::cout <<  "Введите строку: ";
    getline(std::cin, s);

    for (i = 0; s[i] != '\0'; i++);
    std::cout << "Длина: " << i << std::endl;

    return 0;
}
