
// calculate the Factorial of a Given Number using while loop 
#include<stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter num: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Invalid number\n");
    } else {
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }

        
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}
