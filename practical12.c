// WAP to check whether the number is prime or not.

#include <stdio.h>

void isPrimeFun(int);

int main() {
    int num, isPrime = 1, i = 2;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (i <= num / 2 && isPrime) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is a not prime number\n", num);
    }
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}