// WAP to swap two numbers without using third variable

#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter two numbers (separated by a space): ");
    scanf("%lf %lf", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping:\n");
    printf("Number 1: %.2f\n", num1);
    printf("Number 2: %.2f\n", num2);

    return 0;
}
