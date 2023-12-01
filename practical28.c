// WAP to find factorial of a number using recursion

#include <stdio.h>

int factorial(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("factorial of %d is %d\n", num, factorial(num));
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}

int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}