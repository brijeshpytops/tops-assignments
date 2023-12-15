// Find Area of Square formula : a = a2

#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side length ");
    scanf("%f", &side);

    area = side * side;

    printf("The area of the square with side length %.2f is: %.2f\n", side, area);

    return 0;
}
