// WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    
    float years, days;
    printf("Enter the number of years: ");
    scanf("%f", &years);
    days = years * 365;
    printf("%.2f years is equal to %.2f days.\n", years, days);

    float days_, years_;
    printf("Enter the number of days: ");
    scanf("%f", &days_);
    years_ = days_ / 365;
    printf("%.2f days is equal to %.2f years.\n", days_, years_);

    return 0;
}
