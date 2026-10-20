#include <iostream>

int main()
{
    int low, high, i, flag;

    std::cout << "Выводим простые числа между a и b, введите a и b: ";
    std::cin >> low >> high;

    while (low < high) {
        flag = 0;
        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            std::cout << low << " ";
        }
        
        ++low;
    }

    std::cout << std::endl;
    
    return 0;
}
