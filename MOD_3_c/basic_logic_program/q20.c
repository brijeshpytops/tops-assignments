// Accept monthly salary from the user and deduct 10% insurance premium,
// 10% loan installment find out of remaining salary.

#include <stdio.h>

int main() {
    float month_s;

    printf("Enter monthly salary: ");
    scanf("%f", &month_s);

    float insurance_premium = 0.1 * month_s;

    float loan_installment = 0.1 * month_s;

    float remaining_salary = month_s - insurance_premium - loan_installment;

    printf("Original Monthly Salary: %.2f\n", month_s);
    printf("Insurance Premium (10%%): %.2f\n", insurance_premium);
    printf("Loan Installment (10%%): %.2f\n", loan_installment);
    printf("Remaining Salary: %.2f\n", remaining_salary);

    return 0;
}
