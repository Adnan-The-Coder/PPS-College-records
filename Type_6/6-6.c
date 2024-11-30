#include <stdio.h>

// Function for Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index where the key is found
        }
    }
    return -1;  // Return -1 if the key is not found
}

// Function for Binary Search (requires sorted array)
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            return mid;  // Return the index where the key is found
        }
        else if (arr[mid] < key) {
            left = mid + 1;  // Narrow the search to the right half
        }
        else {
            right = mid - 1;  // Narrow the search to the left half
        }
    }
    return -1;  // Return -1 if the key is not found
}

int main() {
    int n, i, key, choice;
    
    // Ask user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Ask user which search to perform
    printf("Select the search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (Array should be sorted)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    // Ask user for the key to search for
    printf("Enter the value to search for: ");
    scanf("%d", &key);
    
    int result = -1;

    if (choice == 1) {
        // Linear Search
        result = linearSearch(arr, n, key);
    } 
    else if (choice == 2) {
        // Binary Search (requires sorted array)
        // Sort the array before applying binary search
        for (i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    // Swap arr[i] and arr[j]
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        result = binarySearch(arr, n, key);
    } 
    else {
        printf("Invalid choice.\n");
        return 0;
    }
    
    // Display the result
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}