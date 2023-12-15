// WAP to print Fibonacci series up to given numbers

#include<stdio.h>

int main() {
    int n, n1 = 0, n2 = 1, nth;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            nth = i;
        } else {
            nth = n1 + n2;
            n1 = n2;
            n2 = nth;
        }
        printf("%d ", nth);
    }

    return 0;
}
