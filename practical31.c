// 9.1
#include <stdio.h>

struct Student {
    int roll_no;
    char name[20];
    float marks;
    char course[10];
};

int main() {
    struct Student students[3];

    printf("Enter Data\n");
    printf("Roll no.\tName\tMarks\tCourse\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d\t%s\t%f\t%s", &students[i].roll_no, &students[i].name, &students[i].marks, &students[i].course);
    }

    printf("\nRoll no.\tName\tMarks\tCourse\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t\t%s\t%0.2f\t%s\n", students[i].roll_no, students[i].name, students[i].marks, students[i].course);
    }
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}