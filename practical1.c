// Arithematic operations on two numbers
#include <stdio.h>

int main() {
    int a = 3;
    int b = 5;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    float quo = (float)a / (float)b;

    printf("Addition of %d and %d is %d\n", a, b, sum);
    printf("Substraction of %d and %d is %d\n", a, b, diff);
    printf("Product of %d and %d is %d\n", a, b, prod);
    printf("Division of %d and %d is %0.2f\n", a, b, quo);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}