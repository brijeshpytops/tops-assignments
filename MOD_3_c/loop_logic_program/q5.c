// WAP to print factorial of given number

#include<stdio.h>

int main() {
    int num;
    int f = 1; 

    printf("Enter a num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        f *= i;
    }

    printf("factorial of %d = %d\n", num, f);

    return 0;
}
