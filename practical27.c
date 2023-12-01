#include <stdio.h>

void swapByRef(int*, int*);

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swapByRef(&a, &b);
    printf("Outside Function\na: %d, b: %d\n", a, b);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}

void swapByRef(int* x, int* y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("Inside Function\nx: %d, y: %d\n", *x, *y);
}