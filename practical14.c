// WAP to print age of 5 students;

#include <stdio.h>

int main() {
    int age[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Age of student %d is %d\n", i + 1, age[i]);
    }
    return 0;
};