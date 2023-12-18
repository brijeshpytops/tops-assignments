// WAP of Addition, Subtraction, Multiplication and Division using Switch
// case.(Must Be Menu Driven)
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, result;
    int c;

    printf("Enter the operation you want to perform:\n");
    printf("(1) for Addition\n");
    printf("(2) for Subtraction\n");
    printf("(3) for Multiplication\n");
    printf("(4) for Division\n");
    printf("(5) for Modulo\n");
    printf("Your choice: ");
    scanf("%d",&c);

    printf("Enter the first number: ");
    scanf("%f",&a);

    printf("Enter the second number: ");
    scanf("%f",&b);

    switch (c) {
        case 1:
            result = a + b;
            printf("Addition: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Subtraction: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Multiplication: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Division: %.2f\n", result);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;
        case 5:
            if (b != 0) {
                result = fmod(a, b);
                printf("Modulo: %.2f\n", result);
            } else {
                printf("Modulus by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
