/* Write a menu driven program to perform the following operations by entering the choice from ths user's side
1. Check whether number is even or odd
2. Calculate power of a number
3. Calculate square root of a number
*/
#include <math.h>
#include <stdio.h>

int main() {
    printf("1. Check whether number is even or odd\n");
    printf("2. Calculate power of a number\n");
    printf("3. Calculate square root of a number\n");

    int cmd;
    printf("Enter your choice: ");
    scanf("%d", &cmd);
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (cmd) {
        case 1:
            printf("%d is %s\n", num, num % 2 ? "odd" : "even");
            break;
        case 2:
            printf("%d raised to power 4 is %d\n", num, (int)pow(num, 4));
            break;
        case 3:
            printf("square root of %d is %0.2f\n", num, sqrt(num));
            break;
        default:
            printf("Invalid choice\n");
    }
    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}