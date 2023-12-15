// Write a program you have to make a summation of first and last Digit. (E.g.,
// 1234 Ans: -5)

#include<stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a num: ");
    scanf("%d", &num);
 
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    last_digit = num % 10;

    sum = first_digit + last_digit;

    printf("Sum of first and last digits is: %d\n", sum);

    return 0;
}
