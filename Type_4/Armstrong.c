#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if (sum == num)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
