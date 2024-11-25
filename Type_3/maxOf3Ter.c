#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int greatest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Greatest number: %d\n", greatest);

    return 0;
}
