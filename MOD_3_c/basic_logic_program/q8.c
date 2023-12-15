// Find circumference of Rectangle formula :  P=2×(length+width)

#include <stdio.h>

int main() {
    float length, width, pm;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    pm = 2 * (length + width);

    printf("The pm of the rectangle is: %.2f\n", pm);

    return 0;
}

