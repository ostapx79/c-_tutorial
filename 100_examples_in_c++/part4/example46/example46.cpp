#include <iostream>

int main() {

    int a[100][100];
    int b[100][100];
    int mult[10][10];
    int r1;
    int c1;
    int r2;
    int c2;

    std::cout << "К-во строк и колонок первой матрицы: ";
    std::cin >> r1 >> c1;
    std::cout << "К-во строк и колонок второй матрицы: ";
    std::cin >> r2 >> c2;

    while (c1 != c2) {
        std::cout
            << "Ошибка! К-во колонок первой матрицы не равно количеству строк второй.\n";

        std::cout << "К-во строк и колонок первой матрицы: ";
        std::cin >> r1 >> c2;
        std::cout << "К-во строк и колонок второй матрицы: ";
        std::cin >> r2 >> c2;
    }

    std::cout << std::endl << "Введите элемент матрицы 1:" << std::endl;

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            std::cout << "Вводим элемент а" << i + 1 << j + 1 << ": ";
            std::cin >> a[i][j];
        }
    }

    std::cout << std::endl << "Введите элемент матрицы 2:" << std::endl;

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            std::cout << "Вводим элемент b" << i + 1 << j + 1 << ": ";
            std::cin >> b[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                mult[i][j] += a[i][k] * b[k][i];
            }
        }
    }

    std::cout << std::endl << "Результат умножения матрицы: " << std::endl;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            std::cout << " " << mult[i][j];
            if (j == c2 - 1) {
                std::cout << std::endl;
            }
        }
    }

    std::cout << std::endl;

    return 0;
}
