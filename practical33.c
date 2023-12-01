// 9.3

#include <stdio.h>

union Student {
    double marks;
    char UID[10];
    char name[20];
};

int main() {
    printf("Size of union Student is %lu\n", sizeof(union Student));
    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}