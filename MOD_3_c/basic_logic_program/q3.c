// WAP to Find Area And Circumference of Circle

#include <stdio.h>

int main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = 3.14159 * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    return 0;
}