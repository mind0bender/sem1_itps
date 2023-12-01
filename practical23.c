// WAP to copy a string without using the built-in function.

#include <stdio.h>

int main() {
    char ch1[10];
    char ch2[10];
    printf("Enter a string: ");
    gets(ch1);

    for (int i = 0; i < 10; i++) {
        ch2[i] = ch1[i];
    }
    printf("String copied : %s\n", ch2);

    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}