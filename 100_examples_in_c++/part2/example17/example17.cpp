#include <iostream>

int main() {
    int n1;
    int n2;
    int hcf;

    std::cout << "Введите два числа: ";
    std::cin >> n1 >> n2;

    if (n2 > n1) {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }

    std::cout << "НОД = " << hcf << std::endl;
    return 0;
}
