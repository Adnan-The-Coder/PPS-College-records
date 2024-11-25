// Program to Find Sum and Count of Digits in a Given Number
#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        count++;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Count of digits: %d\n", count);

    return 0;
}
