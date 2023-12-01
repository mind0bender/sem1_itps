// WAP to reverse a string without using the buillt-int function.
#include <stdio.h>

int main() {
    char ch[10];
    printf("Enter a string: ");
    gets(ch);

    int length = 0;
    for (; length < 10 && ch[length] != '\0'; length++)
        ;
    printf("the original string: %s\n", ch);
    char rev[length];
    for (int i = 0; i < length; i++) {
        rev[i] = ch[length - 1 - i];
    }
    printf("the reverse string: %s\n", rev);

    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}