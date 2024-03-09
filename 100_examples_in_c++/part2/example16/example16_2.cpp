#include <iostream>

int main() {
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    int n;

    std::cout << "Введите положительное число: ";
    std::cin >> n;
    std::cout << "Последовательность Фибоначчи: " << t1 << " " << t2 << " ";
    
    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        std::cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    std::cout << std::endl;
    return 0;
}
