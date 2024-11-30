#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    for (i=0; i<n; i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);    
    }

    int min = arr[0];
    int max = arr[0];

    for (i=1; i<n; i++){
        if (arr[i]< min)
        min = arr[i];
        if (arr[i]>max)
        max = arr[i];
    }

    printf("The Max is %d\n", max);
    printf("The Min is %d\n", min);



    return 0;
}