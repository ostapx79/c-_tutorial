#include <cmath>
#include <iostream>

float calculateSD(float data[]);

int main() {

    float data[10];

    std::cout << "Введите десять элементов: ";
    
    for (int i = 0; i < 10; i++) {
        std::cin >> data[i];
    }

    std::cout << std::endl << "СО = " << calculateSD(data) << std::endl;

    return 0;
}

float calculateSD(float data[]) {
    float sum = .0;
    float mean;
    float standartDeviation = .0;

    for (int i = 0; i < 10; i++) {
        sum += data[i];
    }

    mean = sum / 10;

    for (int i = 0; i < 10; i++) {
        standartDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standartDeviation / 10);
}
