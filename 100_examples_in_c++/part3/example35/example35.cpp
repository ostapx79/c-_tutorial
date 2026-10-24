#include <iostream>

int add(int n);

int main() {
    int n;
    std::cout << "Введите целое положительное число: ";
    std::cin >> n;
    std::cout << "Сумма - " << add(n) << std::endl;
    return 0;
}

int add(int n) {
    if (n != 0)
        return n + add(n - 1);
    else
        return 0;
}
