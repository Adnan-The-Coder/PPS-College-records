#include <stdio.h>

int main() {
    int n, i;
    
    // Ask user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print the array in reverse order
    printf("Array in reverse order: \n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
