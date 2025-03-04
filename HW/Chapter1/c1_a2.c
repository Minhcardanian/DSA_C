#include <stdio.h>
#include <stdlib.h>

// Function to swap two integers using pointers (from Assignment 1)
void Swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to calculate the sum of a 1D array using pointers
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Pointer arithmetic to access elements
    }
    return sum;
}

// Function to sort an array in ascending order using Selection Sort and Swap function
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) { // Compare values
                Swap((arr + i), (arr + j)); // Swap using pointer function
            }
        }
    }
}

// Function to find the maximum sum of a subarray using Kadane's algorithm
int maxSubarraySum(int* arr, int size) {
    int maxSum = *arr; // Initialize max sum with first element
    int currentSum = *arr; // Start from first element

    for (int i = 1; i < size; i++) {
        // Either extend the current subarray or start a new one
        currentSum = (*(arr + i) > (currentSum + *(arr + i))) ? *(arr + i) : (currentSum + *(arr + i));
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }
    return maxSum;
}

int main() {
    int n;

    // (a) Accepting user input for array size and values
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
