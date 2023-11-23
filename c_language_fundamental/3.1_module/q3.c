// WAP to find area of circle, rectangle and triangle 

#include <stdio.h>

int main() {
    int choice;
    double area;

    printf("Choose a shape to find the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = 3.14159 * radius * radius;
                printf("Area of the circle: %.2f\n", area);
            }
            break;
        case 2:
            {
                double length, width;
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                area = length * width;
                printf("Area of the rectangle: %.2f\n", area);
            }
            break;
        case 3:
            {
                double base, height;
                printf("Enter the base of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = 0.5 * base * height;
                printf("Area of the triangle: %.2f\n", area);
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
