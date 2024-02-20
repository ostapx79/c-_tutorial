#include <iostream>

int main() {
    unsigned int n;
    unsigned long long factorial = 1;

    std::cout << "Введите целое положительное число: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Факториал " << n << " = " << factorial << std::endl;

    return 0;
}
