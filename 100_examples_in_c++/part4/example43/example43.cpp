#include <iostream>

int main()
{
    int n;
    float arr[100];

    std::cout << "Введите количество элементов (1-100): ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Введите число " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }
    std::cout << "Максимум = " << arr[0] << std::endl;

    return 0;
}
