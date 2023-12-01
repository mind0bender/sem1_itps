#include <stdio.h>

int main() {
    int num;
    printf("number: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        if (num % i == 0) {
            printf("%d", i);
        }
    }
    return 0;
}