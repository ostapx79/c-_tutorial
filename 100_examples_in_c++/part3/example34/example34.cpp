#include <iostream>

int factorial(int n);

int main() {
    int n;

    std::cout << "Введите положительное число: ";
    std::cin >> n;
    std::cout << "Факториал " << n << " = " << factorial(n) << std::endl;

    return 0;
}

int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
