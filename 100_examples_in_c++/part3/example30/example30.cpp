#include <iostream>

int checkPrimeNumber(int x);

int main()
{
    int n;

    std::cout << "Введите положительное число: ";
    std::cin >> n;

    if(checkPrimeNumber(n) == true) {
        std::cout << n << " - это простое число.";
    } else {
        std::cout << n << " - не простое число.";
    }

    std::cout << std::endl;

    return 0;
}

int checkPrimeNumber(int n) {
    bool flag = true;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}
