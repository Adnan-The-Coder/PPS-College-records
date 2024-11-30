#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    
    // Traverse the array
    for(i = 0; i < n - 1; i++) {
        minIdx = i;  // Assume the current element is the minimum
        
        // Find the minimum element in unsorted part of the array
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;  // Update the index of minimum element
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        if(minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // Traverse through all array elements
    for(i = 0; i < n - 1; i++) {
        // Last i elements are already sorted, so ignore them
        for(j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, choice, i;
    
    // Ask user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Ask user which sort algorithm to apply
    printf("Select the sorting method:\n");
    printf("1. Selection Sort\n");
    printf("2. Bubble Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    // Apply the chosen sorting algorithm
    if(choice == 1) {
        selectionSort(arr, n);
        printf("Array after Selection Sort: \n");
    } else if(choice == 2) {
        bubbleSort(arr, n);
        printf("Array after Bubble Sort: \n");
    } else {
        printf("Invalid choice.\n");
        return 0;
    }
    
    // Print the sorted array
    printArray(arr, n);
    
    return 0;
}
