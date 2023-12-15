// Accept 2 numbers and find out its sum check it size

#include<stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("\n\n\t Input two integers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    
    printf("%d + %d = %d\n", num1, num2, sum);

    printf("Size of num1: %lu bytes\n", sizeof(num1));
    printf("Size of num2: %lu bytes\n", sizeof(num2));

    return 0;
}
