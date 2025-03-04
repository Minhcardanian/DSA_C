void p2p() {
    int V = 202;
    int *P = &V; 
    int **Q = &P; 
    printf("Example 2: Pointer to Pointer\n");
    printf("Value of V: %d\n", V);
    printf("Value via pointer P (*P): %d\n", *P);
    printf("Value via pointer-to-pointer Q (**Q): %d\n\n", **Q);
}
}