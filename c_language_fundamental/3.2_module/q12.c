// Write a program you have to make a summation of first and last Digit. (E.g.,
// 1234 Ans: -5) 

#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter an integer: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number != 0) {
        firstDigit = number % 10;
        number /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
