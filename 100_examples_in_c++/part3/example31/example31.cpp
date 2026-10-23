#include <cmath>
#include <iostream>

int checkArmstrongNumber(int num);

int main()
{
    int originNum;
    std::cout << "Введите целое натуральное число: ";
    std::cin >> originNum;

    if (checkArmstrongNumber(originNum))
        std::cout << originNum << " - число Армстронга" << std::endl;
    else
        std::cout << originNum << " - не число Армстронга" << std::endl;

    return 0;
}

int checkArmstrongNumber(int num) {
    int flag, originNumber, remainder, result = 0, n = 0;
    originNumber = num;

    while (originNumber != 0) {
        originNumber /= 10;
        ++n;
    }

    originNumber = num;
    
    while (originNumber != 0) {
        remainder = originNumber % 10;
        result += pow(remainder, n);
        originNumber /= 10;
    }

    if (result == num)
        flag = 1;
    else
        flag = 0;

    return flag;
}
