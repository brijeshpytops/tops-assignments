

#include <stdio.h>

int main() {
    float side, pm;

    printf("Enter the side length of the rectangle: ");
    scanf("%f", &side);

    pm = 4 * side;

    printf("The pm of the rectangle with side length %.2f is: %.2f\n", side, pm);

    return 0;
}