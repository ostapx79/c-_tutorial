#include <iostream>

int main()
{
    int n;
    float num[100];
    float sum = .0;
    float average;

    std::cout << "Количество элементов массива: ";
    std::cin >> n;

    while (n > 100 || n <= 0) {
        std::cout << "Количество может быть от 1 до 100\n";
        std::cout << "Введите Количество снова ";
        std::cin >> n;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << i + 1 << ". Введите элемент массива: ";
        std::cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    std::cout << "Среднее = " << average << std::endl;

    return 0;
}
