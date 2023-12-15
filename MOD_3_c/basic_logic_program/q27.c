// .Convert days into months

#include <stdio.h>

int main() {
    int days;
    float months;

    printf("Enter a days: ");
    scanf("%d", &days);

    months = days / 30.0;

    printf("Approx %.2f months\n", months);

    return 0;
}
