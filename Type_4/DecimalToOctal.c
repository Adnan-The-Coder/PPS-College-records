#include <stdio.h>

int main() {
    int num, octal[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        octal[i++] = num % 8;
        num /= 8;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");

    return 0;
}
