#include <iostream>

int main() {
    int n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;

    std::cout << "Введите количество элементов последовательности: ";
    std::cin >> n;

    std::cout << "Последовательность Фибоначчи: ";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            std::cout << " " << t1;
            continue;
        }

        if (i == 2) {
            std::cout << t2 << " ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        std::cout << nextTerm << " ";
    }

    std::cout << std::endl;
    return 0;
}
