#include <iostream>

void enterData(
        int firstMatrix[][10], int secondMatrix[][10],
        int rowFirst, int columnFirst,
        int rowSecond, int columnSecond
        );
void multiplyMatrices(
        int firstMatrix[][10], int secondMatrix[][10],
        int multResult[][10], int rowFirst, int columnFirst,
        int rowSecond, int columnSecond
        );
void display(int mult[][10], int rowFirst, int columnSecond);

int main() {

    int firstMatrix[10][10];
    int secondMatrix[10][10];
    int mult[10][10];
    int rowFirst;
    int columnFirst;
    int rowSecond;
    int columnSecond;

    std::cout << "Введите строки и колонки первой матрицы: ";
    std::cin >> rowFirst >> columnFirst;

    std::cout << "Введите строки и колонки второй матрицы: ";
    std::cin >> rowSecond >> columnSecond;

    // Проверяем, можем ли мы умножить матрицы
    while (columnFirst != rowFirst) {
        std::cout
            << "Ошибка! К-во колонок первой матрицы не ровно количество строк второй"
            << std::endl;
        std::cout << "К-во строк и колонок первой матрицы: ";
        std::cin >> rowFirst >> columnFirst;
        std::cout << "К-во строк и колонок второй матрицы: ";
        std::cin >> rowSecond >> columnSecond;
    }

    // Вводим матрицы
    enterData(
            firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    // Умножаем матрицы
    multiplyMatrices(
            firstMatrix, secondMatrix, mult,
            rowFirst, columnFirst, rowSecond, columnSecond);

    // Отображаем
    display(mult, rowFirst, columnSecond);
    
    return 0;
}

void enterData(
        int firstMatrix[][10], int secondMatrix[][10],
        int rowFirst, int columnFirst,
        int rowSecond, int columnSecond
        ) {
    std::cout << std::endl << "Введите элементы матрицы 1:" << std::endl;
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnFirst; j++) {
            std::cout << "Введите элемент a" << i + 1 << j + 1 << ": ";
            std::cin >> firstMatrix[i][j];
        }
    }
    
    std::cout << std::endl << "Введите элементы матрицы 2:" << std::endl;
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < columnSecond; j++) {
            std::cout << "Введите элемент b" << i + 1 << j + 1 << ": ";
            std::cin >>secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(
        int firstMatrix[][10], int secondMatrix[][10],
        int mult[][10], int rowFirst, int columnFirst,
        int rowSecond, int columnSecond
        ) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            for (int k = 0; k < columnFirst; k++) {
                mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int mult[][10], int rowFirst, int columnSecond) {
    std::cout << "Результат умножения матриц:" << std::endl;
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            std::cout << mult[i][j] << " ";
            if (j == columnSecond - 1) {
                std::cout << std::endl << std::endl;
            }
        }
    }
}
