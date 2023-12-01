// WAP to print a grade using else if ladder.

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("Grade A\n");
    } else if (marks > 80) {
        printf("Grade B\n");
    } else if (marks > 70) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}

// WAP to find greatest from 2 no. using ternary operators