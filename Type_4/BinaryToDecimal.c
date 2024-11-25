#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0, digit;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        digit = binary % 10;
        decimal += digit * pow(2, i++);
        binary /= 10;
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}
