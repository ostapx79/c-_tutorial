#include <iostream>

int main()
{
    // 1234 = (1*1*1*1) + (2*2*2*2) + (3*3*3*3) + (4*4*4*4) = 354

    int origNum, numb, digit, sum = 0;
    std::cout << "Введите целое положительное число: ";
    std::cin >> origNum;

    numb = origNum;

    int count = 0;
    while (numb != 0) {
        numb /= 10;
        count++;
    }

    numb = origNum;
    while (numb != 0) {
        digit = numb % 10;

        int expo = 1;
        for (int i = count; i > 0; i--) {
            expo *= digit; 
        }

        sum += expo;
        numb /= 10;
    }

    if (sum == origNum) {
        std::cout << origNum << " - число Армстронга." << std::endl;
    } else {
        std::cout << origNum << " - не число Армстронга." << std::endl;
    }
    return 0;
}
