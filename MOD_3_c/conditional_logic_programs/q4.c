// 4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement 
#include <stdio.h>

int main() {
    float a, b;
    int c;

    printf("Enter the operation you want to perform:\n");
    printf("(1) for Addition\n");
    printf("(2) for Subtraction\n");
    printf("(3) for Multiplication\n");
    printf("(4) for Division\n");
    printf("(5) for Modulo\n");
    printf("Your choice: ");
    scanf("%d", &c);

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    if (c == 1) {
        printf("Addition: %.2f\n", (a + b));
    } else if (c == 2) {
        printf("Subtraction: %.2f\n", (a - b));
    } else if (c == 3) {
        printf("Multiplication: %.2f\n", (a * b));
    } else if (c == 4) {
        if (b != 0) {
            printf("Division: %.2f\n", (a / b));
        } else {
            printf("Division by zero is not allowed\n");
        }
    } else if (c == 5) {
        if (b != 0) {
            printf("Modulo: %.2f\n", fmod(a, b));
        } else {
            printf("Modulus by zero is not allowed\n");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
