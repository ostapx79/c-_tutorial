#include <cstdio>
#include <iostream>
#include <string>

using std::string;

void reverse(const string& str);

int main() {

    string str;
    std::cout << "Введите строку: ";
    getline(std::cin, str);
    reverse(str);

    return 0;
}

void reverse(const string& str) {
    size_t numOfChars = str.size();

    if (numOfChars == 1) {
        std::cout << str << std::endl;
    } else {
        std::cout << str[numOfChars - 1];
        reverse(str.substr(0, numOfChars - 1));
    }
}
