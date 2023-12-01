// WAP to print numbers from 68 to 25 which are divisible by 8.

#include <stdio.h>

int main() {
    for (int i = 68; i >= 25; i--) {
        if (!(i % 8)) {
            printf("%d ", i);
        }
    }
    printf("these numbers are divisible by 8.\n");
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}