#include <stdio.h>

void display() {
    register int a = 0;
    printf("%d\n", a++);
}

void factorial(int num) {
    static int fact = 1;
    if (num > 1) {
        fact *= num;
        factorial(num - 1);
    } else {
        printf("factorial is: %d\n", fact);
    }
}

int main() {
    factorial(5);
    return 0;
}