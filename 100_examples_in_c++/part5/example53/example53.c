#include <stdio.h>

int main() {

    char str[1000], ch;
    int frequency = 0;

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    printf("Введите символ: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            frequency++;
        }
    }
    
    printf("Частота = %d\n", frequency);

    return 0;
}
