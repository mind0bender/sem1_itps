// Find maximum from 3 numbers using nested if else statements.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    printf("Enter the value for c: ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the greatest among %d, %d and %d\n", a, a, b, c);
        } else {
            printf("%d is the greatest among %d, %d and %d\n", c, a, b, c);
        }
    } else {
        if (b > c) {
            printf("%d is the greatest among %d, %d and %d\n", b, a, b, c);
        } else {
            printf("%d is the greatest among %d, %d and %d\n", c, a, b, c);
        }
    }
    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}