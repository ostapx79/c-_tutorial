#include <cstdint>
#include <iostream>

int main() {
    int32_t reversed = 0, n, remainder, original;

    std::cout << "Введите целое число: ";
    std::cin >> n;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        std::cout << original << " - палиндром\n";
    } else {
        std::cout << original << " - не палиндром\n";
    }

    return 0;
}
