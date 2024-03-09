#include <iostream>

int main() {
    int n;
    int sum = 0;
    int i;
    do {
        std::cout << "Введите целое положительное число: ";
        std::cin >> n;
    } while (n <= 0);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "Сумма = " << sum << std::endl;
    return 0;
}
