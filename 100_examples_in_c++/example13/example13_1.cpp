#include <iostream>

int main() {
    int n;
    int sum = 0;

    std::cout << "Введите положительное целое число: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "Сумма = " << sum << std::endl;

    return 0;
}
