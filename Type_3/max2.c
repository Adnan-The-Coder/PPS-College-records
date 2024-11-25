#include<stdio.h>

int main(){
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("Maximum: %d\nMinimum: %d",a,b);
    else
        printf("Maximum: %d\nMinimum: %d",b,a);

    return 0;

}