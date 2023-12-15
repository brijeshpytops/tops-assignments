// Write a program to find out the max from given number (E.g., No: -1562
// Max number is 6)

#include<stdio.h>

int main() {
    int num, m_digit = -1, digit;

    printf("Enter a num: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit > m_digit) {
            m_digit = digit;
        }
        num /= 10;
    }

    printf("Maximum digit is: %d\n", m_digit);

    return 0;
}

