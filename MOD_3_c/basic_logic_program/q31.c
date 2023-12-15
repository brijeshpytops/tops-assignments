// Convert kilometers into meters

#include <stdio.h>

int main() {
    double km, m;

    printf("Enter distance in km: ");
    scanf("%lf", &km);

    m = km * 1000;

    printf("%.2f km is equal to %.2f m\n", km, m);

    return 0;
}
