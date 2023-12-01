// WAP to check if the number is an Armstrong number;

#include <math.h>
#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp) {
        rem = temp % 10;
        sum += pow(rem, 3);
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}