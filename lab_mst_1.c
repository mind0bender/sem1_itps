#include <math.h>
#include <stdio.h>

void Q1() {
    int num, noOfDigits = 2;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 20 || num > 99) {
        printf("Out of range!\n");
    }

    while (num) {
        int lastDigit = num % 10;
        printf("%d ", (int)pow(lastDigit, noOfDigits));
        num /= 10;
    }
    printf("\n");
}

void Q2() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is an %s number.\n", num, num % 2 ? "odd" : "even");
}

int main() {
    Q1();
    // Q2();
    printf("Name: Yash Gupta    UID: 23BCS11317\n");
    return 0;
}