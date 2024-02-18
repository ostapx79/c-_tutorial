#include <iostream>

int main() {
    int n;

    std::cout << "Введите число: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << " - четное";
    } else {
        std::cout << " - нечетное";
    }

    std::cout << std::endl;
    return 0;
}
