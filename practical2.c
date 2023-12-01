// write a program using inbuilt mathematical functions with math.h library.

#include <math.h>
#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    int powr = pow(a, b);
    float sqrt_a = sqrt(a);

    printf("Square root of %d is %0.2f\n", a, sqrt_a);
    printf("%d raised to power %d is %d\n", a, b, powr);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}