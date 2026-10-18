#include <iostream>

int main()
{
    int n1, n2, hcf, temp, lcm;

    std::cout << "Введите два числа: ";
    std::cin >> n1 >> n2;

    hcf = n1;
    temp = n2;

    while (hcf != temp) {
        if (hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;

    std::cout << "НОК = " << lcm << std::endl;

    return 0;
}
