# Assignment Solutions

## Assignment 1: Swap Two Integers Using Pointers

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

### Steps for Sorting and Finding Maximum Subarray Sum
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

### Steps for Matrix Sum and Transpose
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

### Sorting Workers by Salary
```mermaid
graph TD;
    A[Start] --> B[User inputs number of workers]
    B --> C[User enters worker details]
    C --> D[Compute total salary using pointer arithmetic]
    D --> E[Sort workers by salary in descending order using selection sort]
    E --> F[Print sorted results]
    F --> G[End]