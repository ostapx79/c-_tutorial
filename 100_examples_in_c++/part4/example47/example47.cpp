#include <iostream>

int main() {

    int a[10][10];
    int transpose[10][10];
    int r;
    int c;

    std::cout << "Введите количество строк и колонок: ";
    std::cin >> r >> c;

    std::cout << "\nВведите элементы матрицы: \n";

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << "a" << i + 1 << j + 1 << ": ";
            std::cin >> a[i][j];
        }
    }

    std::cout << "\nИсходная матрица: \n";

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j ++) {
            std::cout << a[i][j] << " ";
            if (j == c - 1) {
                std::cout << "\n\n";
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    std::cout << "\nТранспонированная матрица:\n";

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            std::cout << transpose[i][j] << " ";
            if (j == r - 1) {
                std::cout << "\n\n";
            }
        }
    }

    std::cout << std::endl;

    return 0;
}
