#include <stdio.h>

int main() {
    int num, sum, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {
        sum = 0;
        while (num != 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        num = sum;
    }

    if (num == 1)
        printf("The number is a Magic number.\n");
    else
        printf("The number is not a Magic number.\n");

    return 0;
}
