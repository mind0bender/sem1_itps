// WAP to get and display elements of 2 2D matrix.

#include <stdio.h>

int main() {
    int mat1[2][2];
    printf("Enter elements of the matrix 1:\n");
    for (int i = 0; i < 2; i++) {
        printf("Enter elements of row %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Enter element %d: ", j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    int mat2[2][2];
    printf("Enter elements of the matrix 2:\n");
    for (int i = 0; i < 2; i++) {
        printf("Enter elements of row %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Enter element %d: ", j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("The elements of the matrix 1 are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the matrix 2 are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("The sum of above matrices is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}