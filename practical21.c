/*
WAP to implement the following built-in functions of string.h:
1. strlen()
2. strcpy()
3. strcat()
4. strcmp()
5. strrev()
6. strlwr()
7. strupr()
*/

#include <stdio.h>
#include <string.h>

int main() {
    char ch[10] = "Hello";

    printf("Length of string: %ld\n", strlen(ch));
    printf("String copied : %s\n", strcpy(ch, "World"));
    printf("String concatenated : %s\n", strcat(ch, "Hello"));
    printf("String comparison: %d\n", strcmp(ch, "Hello"));

    // printf("%d\n", 'W' - 'H');

    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}