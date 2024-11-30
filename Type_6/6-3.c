#include <stdio.h>
#include <math.h>  

int main() {
    int n, i;
    
    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare the array to store the numbers
    double arr[n];
    
    // Input elements of the array
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    // Calculate the sum of the array elements
    double sum = 0.0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average
    double average = sum / n;
    
    // Calculate the variance
    double variance = 0.0;
    for(i = 0; i < n; i++) {
        variance += pow(arr[i] - average, 2);  // pow(x, 2) calculates the square of x
    }

    // Calculate the standard deviation
    double standard_deviation = sqrt(variance / n);  // sqrt() gives the square root

    // Print the results
    printf("Average: %.2lf\n", average);
    printf("Standard Deviation: %.2lf\n", standard_deviation);

    return 0;
}
