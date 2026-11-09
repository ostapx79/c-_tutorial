#include <iostream>

int main() {
    std::string str = "Hello, world!";

    char findCh = 'i';
    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == findCh) {
            ++count;
        }
    }


    std::cout << "Символ " << findCh << " встречается " << count << " раз.\n";

    return 0;
}
