#include <stdio.h> 

//swap function using pointers
void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//main 
int main(){
    int a =10, b=20;
    printf("Before swapping: a=%d, b=%d\n", a,b);
    Swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    stop

    return 0;
 
}