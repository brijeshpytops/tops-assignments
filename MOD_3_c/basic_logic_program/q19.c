// .Calculate compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    int compPerYear;

    printf("Enter principal amount: $");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter number of times interest is compounded p/y: ");
    scanf("%d", &compPerYear);

    printf("Enter the number of years: ");
    scanf("%f", &time);

    float compound_interest = principal * pow(1 + rate / compPerYear, compPerYear * time) - principal;

    printf("Compound interest: $%.2f\n", compound_interest);

    return 0;
}
