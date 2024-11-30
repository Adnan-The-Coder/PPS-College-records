#include <stdio.h>

int main() {
    int n, i, j, k = 0;
    
    // Ask the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Remove duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift all elements to the left to remove the duplicate
                for(int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Decrease array size
                n--;
                // Do not increment j as we want to check the new element at position j
                j--;
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
