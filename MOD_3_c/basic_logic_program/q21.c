// Accept 2 numbers from user and swap 2 numbers with using 3rd variable
// and without using 3rd variable

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the first num: ");
    scanf("%d", &num1);

    printf("Enter the second num: ");
    scanf("%d", &num2);

    printf("\n\nSwapping using a third variable:\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nSwapping without using a third variable:\n");
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
