#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    char op;

    // Input format: number operator number
    printf("Enter calculation (e.g., 10 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    // Switch case to select operation
    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '*':
        case 'x':
        case 'X':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
