// 13.WAP to find minimum number among 3 numbers using ternary operator 
#include<stdio.h>

int main(){
    int num1,num2,num3;

    printf("\nEnter Number A: ");
    scanf("%d",&num1);

    printf("\nEnter Number B: ");
    scanf("%d",&num2);

    printf("\nEnter Number C: ");
    scanf("%d",&num3);

    int min = (num1 < num2)?((num1<num3)? num1 :  num3) :((num2 < num3) ? num2 : num3);
    printf("\nMInimum Number = %d",min);

    return 0;
}
