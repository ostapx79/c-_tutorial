#include <iostream>

int main() {
    float n1;
    float n2;
    float n3;

    std::cout << "Введите три целых числа: ";
    std::cin >> n1 >> n2 >> n3;

    if ((n1 >= n2) && (n1 >= n3))
        std::cout << "Max: " << n1;
    else if ((n2 >= n1) && (n2 >= n3))
        std::cout << "Max: " << n2;
    else
        std::cout << "Max: " << n3;

    std::cout << std::endl;
    return 0;
}
