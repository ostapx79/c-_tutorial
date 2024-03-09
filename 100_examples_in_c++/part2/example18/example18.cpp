#include <iostream>

int main() {
    int n1;
    int n2;
    int LCM;

    std::cout << "Введите два целых числа: ";
    std::cin >> n1 >> n2;

    LCM = (n1 > n2) ? n1 : n2;

    while (1) {
        if (LCM % n1 == 0 && LCM % n2 == 0) {
            std::cout << "НОК = " << LCM << std::endl;
            break;
        }
        ++LCM;
    }

    std::cout << std::endl;
    return 0;
}
