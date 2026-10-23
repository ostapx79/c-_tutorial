#include <iostream>

int checkPrimeNumber(int num);

int main()
{
    int n1, n2;
    bool flag;

    std::cout << "Введите два положительных целых числа: ";
    std::cin >> n1 >> n2;
    std::cout << "Простые числа между " << n1 << "и " << n2 << ": ";
    
    for (int i = n1 + 1; i < n2; i++) {
        flag = checkPrimeNumber(i);

        if (flag)
            std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}

int checkPrimeNumber(int num) {
    bool flag = true;
    
    for (int j = 2; j < num / 2; j++) {
        if (num % j == 0) {
            flag = false;
            break;
        }
    }

    return flag;
}
