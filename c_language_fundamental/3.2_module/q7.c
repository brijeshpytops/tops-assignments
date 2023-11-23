// WAP to print factorial of given number 

#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
