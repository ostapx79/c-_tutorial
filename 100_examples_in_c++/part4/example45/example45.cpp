#include <iostream>

int main() {
    int r;
    int c;
    int a[100][100];
    int b[100][100];
    int sum[100][100];

    std::cout << "Введите количество строк (1-100): ";
    std::cin >> r;
    std::cout << "Введите количество колонок (1-100); ";
    std::cin >> c;

    std::cout << std::endl << "Введите элемент первой матрицы: " << std::endl;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << "Введите элемент a" << i + 1 << j + 1 << ": ";
            std::cin >> a[i][j];
        }
    }

    std::cout << std::endl << "Выводим элементы второй матрицы: " << std::endl;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << "Введите элемент b" << i + 1 << j + 1 << ": ";
            std::cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    std::cout << std::endl << "Сумма двух матриц: " << std::endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << sum[i][j] << "  ";
            if (j == c - 1) {
                std::cout << std::endl;
            }
        }
    }

    std::cout << std::endl;

    return 0;
}
