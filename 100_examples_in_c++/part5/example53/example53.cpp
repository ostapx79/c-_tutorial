#include <iostream>

int main() {

    char str[1000], ch;
    int frequency = 0;

    std::cout << "Введите строку: ";
    std::cin >> str;

    std::cout << "Введите символ: ";
    std::cin >> ch;

    for (int i = 0; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            frequency++;
        }
    }

    std::cout << "Чистота символа = " << frequency << std::endl;

    return 0;
}
