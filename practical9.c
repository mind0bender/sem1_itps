// write a program to find the greatest from 3 numbers using ternary operators.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d is largest among %d, %d and %d\n", (a > b) ? (a > c ? a : c) : (b > c ? b : c), a, b, c);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}
