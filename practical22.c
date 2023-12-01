// WAP to find the length of a string without using the built-in function.
#include <stdio.h>

int main() {
    char ch[10];
    printf("Enter a string: ");
    gets(ch);

    // int count = 0;
    // for (; count < 10; count++) {
    //     if (ch[count] == '\0') {
    //         break;
    //     }
    // }
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (ch[i] == '\0') {
            break;
        }
        count++;
    }
    printf("Length of string: %d\n", count);

    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}