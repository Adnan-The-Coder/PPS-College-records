#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    int max = (a>b && a>c) ? a : (b>c && b>a ? b : c);
    int min = (a<b && a<c) ? a : (b<c && b<a ? b : c);
    printf("Maximum: %d/nMinimum: %d",max,min);
    return 0;
}

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}
