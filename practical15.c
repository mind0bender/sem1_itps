// WAP to implement linear search on an integer array.

#include <stdio.h>

int main() {
    int arr[5];
    int search;
    int found = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}