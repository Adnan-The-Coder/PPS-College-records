#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d%d", &r2, &c2);
    
    // Check if multiplication is possible (columns of Matrix 1 must equal rows of Matrix 2)
    if (c1 != r2) {
        printf("Matrix multiplication is not possible. The number of columns of Matrix 1 must equal the number of rows of Matrix 2.\n");
        return 0;
    }
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    
    // Input Matrix 1
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input Matrix 2
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Initialize the result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Display the result of the multiplication
    printf("Resultant Matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
