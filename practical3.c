// WAP to perform bitwise operations on two numbers.
#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    printf("~%d = %d\n", a, ~a);
    printf("%d >> %d = %d\n", a, 3, a >> 3);
    printf("%d << %d = %d\n", b, 2, b << 2);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}