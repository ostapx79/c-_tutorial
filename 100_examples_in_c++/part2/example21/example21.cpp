#include <cstdint>
#include <iostream>

int main()
{
    int32_t exponent;
    float base, result = 1;

    std::cout << "Введите число и степень соответственно:  ";
    std::cin >> base >> exponent;

    std::cout << base << " ^ " << exponent << " = ";

    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    std::cout << result << std::endl;

    return 0;
}
