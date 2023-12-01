// selection sort

#include <stdio.h>

int main() {
    int n = 5;
    int arr[] = {1, 9, 2, 8, 3};
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    return 0;
}