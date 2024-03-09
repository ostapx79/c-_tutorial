#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int temp;

    std::cout << "До замены:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "\nПосле замены:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}
