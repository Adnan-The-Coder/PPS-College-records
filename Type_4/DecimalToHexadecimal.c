#include <stdio.h>

int main() {
    int num, remainder;
    char hex[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 16;
        hex[i++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        num /= 16;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");

    return 0;
}
