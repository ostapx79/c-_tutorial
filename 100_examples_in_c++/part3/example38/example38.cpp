#include <cmath>
#include <iostream>

int octalToDecimal(int octalNumber);
int decimalToOctal(int decimalNumber);

int main() {

    int octalNumber;
    int decimalNumber;

    std::cout << "Введите восьмеричное число: ";
    std::cin >> octalNumber;
    std::cout << octalNumber << " (octal) = " << octalToDecimal(octalNumber)
        << " (decimal) " << std::endl;

    std::cout << "Введите десятичное число: ";
    std::cin >> decimalNumber;
    std::cout << decimalNumber << " (decimal) = " << decimalToOctal(decimalNumber)
        << " (octal) " << std::endl;

    return 0;
}

int octalToDecimal(int octalNumber) {
    int decimalNumber = 0;
    int i = 0;

    while (octalNumber != 0) {
        int rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        i++;
    }

    return decimalNumber;
}

int decimalToOctal(int decimalNumber) {
    int i = 1;
    int octalNumber = 0;

    while (decimalNumber != 0) {
        int rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }

    return octalNumber;
}
