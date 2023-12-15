// Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main() {
    float side_a, side_b, side_c, pm;


    printf("Enter the length of side A: ");
    scanf("%f", &side_a);

    printf("Enter the length of side B: ");
    scanf("%f", &side_b);

    printf("Enter the length of side C: ");
    scanf("%f", &side_c);

    pm = side_a + side_b + side_c;

    printf("The pm of the triangle is: %.2f\n", pm);

    return 0;
}
