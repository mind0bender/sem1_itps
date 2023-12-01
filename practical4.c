// WAP to perform pre/post increment and decrement operations on two numbers.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("After pre-increment, the value of a is %d\n", ++a);
    printf("After post-increment, the value of a is %d\n", a++);
    printf("After pre-decrement, the value of b is %d\n", --b);
    printf("After post-decrement, the value of b is %d\n", b--);

    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}