// Binary search

#include <stdio.h>

int main() {
    int n = 5;
    int arr[5] = {5, 10, 20, 30, 50};
    int search, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &search);
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (arr[mid] == search) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < search) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}