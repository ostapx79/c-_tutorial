#include <cmath>
#include <iostream>

int convertBinaryToOctal(long long ll);
long long convertOctalToBinary(int n);

int main()
{

    long long binaryNumber;
    int octalNumber;

    std::cout << "Введите двоичное число: ";
    std::cin >> binaryNumber;
    std::cout << binaryNumber << " (binary) = " << convertBinaryToOctal(binaryNumber)
        << " (octal) " << std::endl;

    std::cout << "Введите восьмеричное число: ";
    std::cin >> octalNumber;
    std::cout << octalNumber << " (octal) = " << convertOctalToBinary(octalNumber)
        << " (binary) " << std::endl;

    return 0;
}

int convertBinaryToOctal(long long binaryNumber) {
    int octalNumber = 0;
    int decemalNumber = 0;
    int i = 0;

    while (binaryNumber != 0) {
        decemalNumber += (binaryNumber % 10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }

    i = 1;

    while (decemalNumber != 0) {
        octalNumber += (decemalNumber % 8) * i;
        decemalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

long long convertOctalToBinary(int octalNumber) {
    int decemalNumber = 0;
    int i = 0;
    long long binaryNumber = 0;

    while (octalNumber != 0) {
        decemalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    i = 1;

    while (decemalNumber != 0) {
        binaryNumber += (decemalNumber % 2) * i;
        decemalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}
