// Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    sum = -sum;

    printf("The negative sum of digits is: %d\n", sum);

    return 0;
}
