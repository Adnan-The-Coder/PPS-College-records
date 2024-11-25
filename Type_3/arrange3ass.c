#include<stdio.h>

int main(){
    int a, b, c, temp;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b) {temp = a; a = b; b = temp;}
    if (b>c) {temp = b; b = c; c = temp;}
    if (a>c) {temp = a; a = c; c = temp;}

    printf("Assending order: %d %d %d",a,b,c);
    return 0;
}

