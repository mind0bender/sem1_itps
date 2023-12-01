// 10.1
// WAP to enter elements in an array and display using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    ptr = (int*)malloc(5 * sizeof(int));
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }
    printf("Elements are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\nUID: 23BCS11317     Name: Yash Gupta\n");
    free(ptr);
    return 0;
}