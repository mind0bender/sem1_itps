// WAP to swap values using call by value
#include <stdio.h>

void swapByValue(int, int);

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swapByValue(a, b);
    printf("Outside Function\na: %d, b: %d\n", a, b);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}

void swapByValue(int x, int y) {
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Inside Function\nx: %d, y: %d\n", x, y);
}