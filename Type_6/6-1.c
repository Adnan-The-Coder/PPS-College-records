#include<stdio.h>

int main(){

    int n,i;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    char Arr[n];
    for (i=0; i<n; i++){
        printf("\nEnter %d Element of the Array: ",i+1);
        scanf("%d",&Arr[i]);
    }
    printf("\nElements of the array are: ");
    for (i=0; i<n; i++)
    printf("%d\t",Arr[i]);
    
    return 0;
}