#include <iostream>

bool checkPrime(int n);

int main()
{
    int n;
    bool flag = false;

    std::cout << "Введите положительное целое число: ";
    std::cin >> n;

    for (int i = 2; i <= n / 2; ++i) {

        if (checkPrime(i)) {

            if (checkPrime(n - i)){
                std::cout << n << " = " << i <<  " + " << n - i << std::endl;
                flag = true;
            }

        }

    }

    return 0;
}

bool checkPrime(int n)
{
    bool isPrime = true;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}
