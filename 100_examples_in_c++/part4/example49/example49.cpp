#include <iostream>

int main() {

    int data[5];
    std::cout << "Введите элементы: ";

    for(int i = 0; i < 5; i++) {
        std::cin >> data[i];
    }

    std::cout << "Вы ввели: ";

    for (int i = 0; i < 5; i++) {
        std::cout << std::endl << *(data + i);
    }

    std::cout << std::endl;

    return 0;
}
