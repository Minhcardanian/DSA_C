#include <stdio.h>
#include <stdlib.h>

//pointer basics
void pointerBasics(){
    int V = 101;
    int *P = &V;

    printf("Example 1: Pointer Basics\n ");
    printf("Value of V: %d\n");
    printf("Address of V: %p\n", (void *)&V);
    printf("Pointer P holds address: %p\n", (void *)P); 
    printf("Derefrenced pointer *P: %d\n\n");
}