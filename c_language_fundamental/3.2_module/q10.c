// Write a program to find out the max from given number (E.g., No: -1562
// Max number is 6)


#include <stdio.h>

int main() {
    int number, digit, maxDigit = -1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("The maximum digit is: %d\n", maxDigit);

    return 0;
}
