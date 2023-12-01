// WAP to find greatest from 2 no. using ternary operators

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is greatest\n", a);
    } else {
        printf("%d is greatest\n", b);
    }

    // printf("Greatest among %d and %d is %d\n", a, b, a > b ? a : b);
    // printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}
