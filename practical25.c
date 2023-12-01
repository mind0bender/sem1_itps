// WAP to concatenate a string w/ other string without using the buillt-int function.
#include <stdio.h>

int main() {
    char ch1[20];
    char ch2[20];
    printf("Enter a string: ");
    gets(ch1);
    printf("Enter another string: ");
    gets(ch2);

    int l1 = 0;
    for (; l1 < 10 && ch1[l1] != '\0'; l1++)
        ;
    printf("the original string: %s\n", ch1);
    for (int i = 0; ch2[i] != '\0'; i++, l1++) {
        ch1[l1] = ch2[i];
    }
    printf('\n');
    printf("the concatenated string: %s\n", ch1);

    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}