// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main() {
    float width, length, height, sa;

    printf("Enter the width of the rectangular: ");
    scanf("%f", &width);

    printf("Enter the length of the rectangular: ");
    scanf("%f", &length);

    printf("Enter the height of the rectangular: ");
    scanf("%f", &height);

    sa= 2 * (width * length + height * length + height * width);

    printf("The surface area of the rectangular is: %.2f\n", sa);

    return 0;
}
