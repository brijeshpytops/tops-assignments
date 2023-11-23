// Write a program to make Simple calculator (to make addition, subtraction,
// multiplication, division and modulo)

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            result = fmod(num1, num2); 
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
