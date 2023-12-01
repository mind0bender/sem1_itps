// WAP to delete an element from an array.

#include <stdio.h>

int main() {
    int n = 5;
    int arr[5] = {10, 5, 30, 20, 50};
    int del;
    printf("Enter the position of the element to delete: ");
    scanf("%d", &del);
    for (int i = del - 1; i < n; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("UID: 23BCS11317     Name: Yash Gupta\n");
    return 0;
}