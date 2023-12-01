// WAP to evaluate quadratic equations using else if ladder statements.
#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    // scanf("%fx^2 + %fx + %f = 0", &a, &b, &c);
    scanf("%f %f %f", &a, &b, &c);
    float D = pow(b, 2) - 4 * a * c;
    if (D > 0) {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct\n");
        printf("x1 = %0.2f\n", x1);
        printf("x2 = %0.2f\n", x2);
    } else if (D == 0) {
        float x = -b / (2 * a);
        printf("Roots are real and equal\n");
        printf("x = %0.2f\n", x);
    } else {
        printf("Roots are imaginary\n");
    }
    printf("UID: 23BCS11317     Name: Yash Gupta\n");

    return 0;
}