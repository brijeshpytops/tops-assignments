// 8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>

int main(){
    float height;

    printf("\nEnter Your Height In Centi-Meter: ");
    scanf("%f",&height);

    if (height < 150) {
        printf("\nPerson is Short");
    } else if (height >= 150 && height < 170) {
        printf("\nPerson is of Average Height");
    } else {
        printf("\nPerson is Tall");
    }

    return 0;
}