#include <iostream>

int calculatePower(int n1, int n2);

int main() {
    int base;
    int powerRaised;
    int result;

    std::cout << "Введите число: ";
    std::cin >> base;

    std::cout << "Введите степень: ";
    std::cin >> powerRaised;

    result = calculatePower(base, powerRaised + 1);
    std::cout << base << " ^ " << powerRaised << " = " << result << std::endl;

    return 0;
}

int calculatePower(int base, int powerRaised) {
    if (powerRaised != 1) {
        return (base * calculatePower(base, powerRaised - 1));
    } else {
        return 1;
    }
}
