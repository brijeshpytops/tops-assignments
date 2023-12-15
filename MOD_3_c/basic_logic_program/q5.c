// Find Area of Cube formula : a = 6a2


#include <stdio.h>

int main() {
    double side, s_area;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);

    s_area = 6 * side * side;

    printf("The surface area of the cube with side length %.2lf is: %.2lf\n", side, s_area);

    return 0;
}
