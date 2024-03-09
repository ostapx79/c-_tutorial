#include <iostream>
#include <cmath>

int main() {
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

    std::cout << "Введите коэффициенты a, b и c: ";
    std::cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Корни являются вещественными и они разные\n";
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else if (discriminant == 0) {
        std::cout << "Корни вещественные и одинаковые\n";
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        std::cout << "x1 = x2 = " << x1 << std::endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(discriminant) / (2 * a);
        std::cout << "Корни являются комплексными и разными\n";
        std::cout << "x1 = " << realPart << " + " << imaginaryPart << " i" << std::endl;
        std::cout << "x2 = " << realPart << " - " << imaginaryPart << " i" << std::endl;
    } 

    return 0;
}
