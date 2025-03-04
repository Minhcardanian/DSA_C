#include <stdio.h>
#include <stdlib.h>

// Function to compute sum of a 2D array using pointers
int sum2DArray(int** arr, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += *(*(arr + i) + j); // Accessing element using pointer arithmetic
        }
    }
    return sum;
}

// Function to compute transpose of a matrix
void transposeMatrix(int** arr, int rows, int cols) {
    printf("\nTranspose of the matrix:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", *(*(arr + i) + j)); // Swap row and column access
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // (a) Get matrix size from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocate 2D array
    int** arr = (int**) malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
    }

    // Get array elements
    printf("Enter elements of the %d x %d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", (*(arr + i) + j));
        }
    }

    // (b) Compute and print sum
    printf("\nSum of the 2D array: %d\n", sum2DArray(arr, rows, cols));

    // (c) Print transpose of matrix
    transposeMatrix(arr, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
