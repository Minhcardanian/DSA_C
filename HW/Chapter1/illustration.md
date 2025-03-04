# DSA in C - Solved Assignments

This repository contains solutions for Data Structures and Algorithms (DSA) problems in C, complete with implementations and workflow diagrams.

---

## Assignment 1: Swap Two Integers Using Pointers

### Problem Statement
Write a function to swap two integers using pointers: `void Swap(int* x, int* y)`. Implement a program to test this function.

### Solution
```c
void Swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
```

### Algorithm Flow
```mermaid
graph TD;
    A[Start] --> B[Receive two integer pointers x and y]
    B --> C[Store *x in temp]
    C --> D[Assign *y to *x]
    D --> E[Assign temp to *y]
    E --> F[Swapped successfully]
    F --> G[End]
```

---

## Assignment 2: 1D Array Operations

### Problem Statement
1. Allow user input for a 1D-array.
2. Compute sum using pointers.
3. Sort in ascending order.
4. Find the maximum sum of a subarray.

### Solution
```c
int sumArray(int* arr, int size) { 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
```

### Algorithm Flow
```mermaid
graph TD;
    A[Start] --> B[User inputs array size]
    B --> C[User enters array elements]
    C --> D[Compute sum using pointer arithmetic]
    D --> E[Sort array using selection sort]
    E --> F[Find max subarray sum using Kadane's Algorithm]
    F --> G[Print results]
    G --> H[End]
```

---

## Assignment 3: 2D Array Operations

### Problem Statement
1. Input a 2D array (matrix).
2. Compute sum using pointers.
3. Print the transpose of the matrix.

### Solution
```c
void transposeMatrix(int** arr, int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
```

### Algorithm Flow
```mermaid
graph TD;
    A[Start] --> B[User inputs matrix dimensions]
    B --> C[User enters matrix elements]
    C --> D[Compute sum using pointer arithmetic]
    D --> E[Compute transpose by swapping row and column access]
    E --> F[Print results]
    F --> G[End]
```

---

## Assignment 4: Worker Structure Operations

### Problem Statement
1. Input a 1D-array of workers (ID, Name, Age, Salary).
2. Compute total salary using pointers.
3. Sort workers by salary in descending order.

### Solution
```c
typedef struct {
    int id;
    char fullName[50];
    int age;
    float salary;
} Worker;
```

### Algorithm Flow
```mermaid
graph TD;
    A[Start] --> B[User inputs number of workers]
    B --> C[User enters worker details]
    C --> D[Compute total salary using pointer arithmetic]
    D --> E[Sort workers by salary in descending order]
    E --> F[Print sorted results]
    F --> G[End]
```
