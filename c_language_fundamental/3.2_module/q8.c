// WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() {
    int n, n1 = 0, n2 = 1, nth;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Print the Fibonacci series up to n terms
    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", n1);

        nth = n1 + n2;
        n1 = n2;
        n2 = nth;
    }

    return 0;
}
