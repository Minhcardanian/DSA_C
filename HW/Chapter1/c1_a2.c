#include <stdio.h>
#include <stdlib.h>

// Swap two integers using pointers
void Swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Calculate sum of a 1D array
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Sort array in ascending order
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                Swap((arr + i), (arr + j));
            }
        }
    }
}

// Find max sum of a subarray (Kadane's Algorithm)
int maxSubarraySum(int* arr, int size) {
    int maxSum = *arr, currentSum = *arr;
    for (int i = 1; i < size; i++) {
        currentSum = (*(arr + i) > (currentSum + *(arr + i))) ? *(arr + i) : (currentSum + *(arr + i));
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }
    return maxSum;
}

int main() {
    int n;

    // Get array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Get array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Print sum
    printf("\nSum of the array: %d\n", sumArray(arr, n));

    // Sort and print array
    sortArray(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Print max subarray sum
    printf("Max subarray sum: %d\n", maxSubarraySum(arr, n));

    // Free memory
    free(arr);
    return 0;
}