#include <stdio.h>

int* addrOfMin(int*, int*, int*);

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("1st number is stored at %p\n", &a);
    printf("2nd number is stored at %p\n", &b);
    printf("3rd number is stored at %p\n", &c);

    int* ptr = addrOfMin(&a, &b, &c);
    printf("smallest number is stored at %p\n", ptr);

    return 0;
}

int* addrOfMin(int* x, int* y, int* z) {
    int* min;
    if (*x < *y && *x < *z) {
        min = x;
    } else if (*y < *z) {
        min = y;
    } else {
        min = z;
    }
    return min;
}
