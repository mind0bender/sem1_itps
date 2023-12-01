#include <stdio.h>

int main() {
    int arr[5] = {23, 11, 3, 1, 7};
    int* ptr = &arr[0];
    for (int i = 0; i < 5; i++) {
        printf("Element %d is %d, ", i + 1, *(ptr + i));
        printf("store on memory address %p\n", (ptr + i));
    }

    return 0;
}