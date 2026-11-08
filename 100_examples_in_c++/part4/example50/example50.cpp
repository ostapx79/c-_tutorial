#include <iostream>

void cyclicSwap(int *a, int *b, int *c);

int main() {

    int a, b, c;

    std::cout << "Введите значения a, b, c: ";
    std::cin >> a >> b >> c;

    std::cout << "Значения перед заменой: " << std::endl;
    std::cout << "a, b, c соответственно: " << a << ", " << b << ", " << c << std::endl;

    cyclicSwap(&a, &b, &c);
    
    std::cout << "После замены: " << std::endl;
    std::cout << "a, b, c соответственно: " << a << ", " << b << ", " << c << std::endl;
    
    return 0;
}

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
