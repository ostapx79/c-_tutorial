#include <iostream>

int gcd(int n1, int n2);

int main() {
    int n1, n2;

    std::cout << "Введите два целых положительных числа: ";
    std::cin >> n1 >> n2;
    std::cout << "НОД " << n1 << " и " << n2 << " = " << gcd(n1, n2) << std::endl;

    return 0;
}

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
