// 17.Write a C program to check whether a triangle can be formed with the given
// values for the angles.
#include<stdio.h>

int main(){
    float angle1,angle2,angle3;

    printf("\nEnter Angle 1: ");
    scanf("%f",&angle1);

    printf("\nEnter Angle 2: ");
    scanf("%f",&angle2);

    printf("\nEnter Angle 3: ");
    scanf("%fs",&angle3);

    if(angle1+angle2+angle3==180.0){
        printf("\nTriangle is formed");
    }else{
        printf("\nTriangle not is formed");
    }

    return 0;
}