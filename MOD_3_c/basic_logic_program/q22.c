// Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
//    Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P


#include <stdio.h>

int main() {
    float principal, rate, time, amount, compound_interest;

    printf("Enter principal amount: $");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter the number of years: ");
    scanf("%f", &time);

    amount = principal * (1 + rate / 100 * time);
    compound_interest = amount - principal;
    
    printf("\nAmount: $%.2f\n", amount);
    printf("Compound Interest: $%.2f\n", compound_interest);

    return 0;
}
