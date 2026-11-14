#include <cstdio>
#include <iostream>

int main() {

    std::string line;
    std::cout << "Введите строку: ";
    getline(std::cin, line);

    for (int i = 0; i < line.size(); ++i) {
        if (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))) {
            line[i] = '\0';
        }
    }

    std::cout << "Результат: " << line << std::endl;

    return 0;
}
