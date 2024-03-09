#include <iostream>

int main() {
    int n;
    int sum = 0;

    std::cout << "Введите целое число: ";
    std::cin >> n;

    int i = 1;
    while (i <= n) {
        sum += i;
        ++i;
    }

    std::cout << "Сумма = " << sum << std::endl;
    return 0;
}
