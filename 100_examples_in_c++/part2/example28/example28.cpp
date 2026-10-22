#include <iostream>

int main()
{
    char op;
    float num1, num2;

    std::cout << "Введите оператор (+ - * /) ";
    std::cin >> op;
    
    std::cout << "Введите операнды: ";
    std::cin >> num1 >> num2;

    switch (op) {
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                std::cout << num1 / num2;
            else
                std::cout << "Division by zero!";
            break;

        default:
            std::cout << "Не правильный оператор!";
            break;
    }

    return 0;

}
