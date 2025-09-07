
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f , Root2 = %.2f\n", root1, root2);
    }
    else if (D == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2f , Root2 = %.2f - %.2f\n", 
                realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
