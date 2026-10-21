#include <iostream>
#include <cmath>

int main()
{
    int low, high, temp1, temp2, remainder, n = 0, result = 0;
    std::cout << "Введите начало и конец диапазона: ";
    std::cin >> low >> high;
    std::cout << "Число Армстронга: ";

    for (int i = low + 1; i < high; i++) {
        temp2 = i;
        temp1 = i;

        while (temp1 != 0) {
            temp1 /= 10;
            ++n;
        }

        while (temp2 != 0) {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        if (result == i) {
            std::cout << i << " ";
        }

        n = 0;
        result = 0;
    }

    std::cout << std::endl;
    return 0;
}
