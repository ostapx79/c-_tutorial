
#include <iostream>
int main()
{
    long long n;
    int count = 0;

    std::cout << "Введите целое число: ";
    std::cin >> n;

    while (n != 0) {
        n /= 10;
        ++count;
    }

    std::cout << "Количество разрядов: " << count << std::endl;
    return 0;
}
