#include <iostream>

int main() {
    int a;
    int b;
    int c;
    int max_var;

    std::cout << "Введите три целых числа: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        max_var = a;
    }
    if (b >= a && b >= c) {
        max_var = b;
    }
    if (c >= a && c >= b) {
        max_var = c;
    }

    std::cout << "Max: " << max_var;
    std::cout << std::endl;

    return 0;
     
}
