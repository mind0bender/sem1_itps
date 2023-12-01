// 10.2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* ptr;
    ptr = (char*)malloc(10);
    strcpy(ptr, "Yash");
    printf("String stored in %p\n", ptr);
    ptr = (char*)realloc(ptr, 20);
    printf("Memory still contains %s\n", ptr);
    strcpy(ptr, "Gupta");
    printf("string now stores %s\n", ptr);
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    free(ptr);
    return 0;
}