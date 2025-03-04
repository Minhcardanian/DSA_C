#include <stdio.h>  // Include the standard input/output header

// Function demonstrating pointer basics.
void pointerBasics() {
    int V = 101;          // Declare an integer variable.
    int *P = &V;          // Declare a pointer P and initialize it with the address of V.

    printf("Example 1: Pointer Basics\n");
    printf("Value of V: %d\n", V);               // Prints 101.
    printf("Address of V: %p\n", (void *)&V);      // Prints the memory address of V.
    printf("Pointer P holds address: %p\n", (void *)P);  // Should be the same as &V.
    printf("Dereferenced pointer *P: %d\n\n", *P); // Prints 101, the value at that address.
}

// The main function serves as the entry point of the program.
int main(void) {
    pointerBasics();  // Call the pointerBasics function.
    return 0;         // Return 0 to indicate successful execution.
}
