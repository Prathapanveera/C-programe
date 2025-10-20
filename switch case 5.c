#include <stdio.h>
#include <math.h>   // For sqrt() function

int main() {
    float a, b, c;        // Coefficients of quadratic equation
    float discriminant;   // b² - 4ac
    float root1, root2, realPart, imagPart;

    // Step 1: Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Step 2: Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Step 3: Use switch to handle cases based on discriminant
    switch (discriminant > 0) {
        case 1:  // discriminant > 0 → real and distinct roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct.\n");
            printf("Root1 = %.2f\n", root1);
            printf("Root2 = %.2f\n", root2);
            break;

        case 0:
            switch (discriminant == 0) {
                case 1:  // discriminant = 0 → real and equal roots
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and equal.\n");
                    printf("Root1 = Root2 = %.2f\n", root1);
                    break;

                case 0:  // discriminant < 0 → imaginary roots
                    realPart = -b / (2 * a);
                    imagPart = sqrt(-discriminant) / (2 * a);
                    printf("Roots are imaginary (complex).\n");
                    printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
                    printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
                    break;
            }
            break;
    }

    return 0;
}
