#include <iostream>

int main() {
    int a = 2;
    int b = 1;
    
    
    std::cout << "До замены:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "\nПосле замены:\n";
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}
