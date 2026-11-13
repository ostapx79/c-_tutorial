#include <iostream>

int main() {

    char c[] = "Hello, world!", findC = 'o';
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        if (findC == c[i]) {
            ++count;
        }
    }

    std::cout << "Частота " << findC << " = " << count << std::endl;

    return 0;
}
