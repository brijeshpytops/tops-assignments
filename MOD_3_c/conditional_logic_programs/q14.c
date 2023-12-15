// 14.WAP to find the largest of three numbers
#include<stdio.h>

int main(){
    int num1,num2,num3;

    printf("\nEnter Number A: ");
    scanf("%d",&num1);

    printf("\nEnter Number B: ");
    scanf("%d",&num2);

    printf("\nEnter Number C: ");
    scanf("%d",&num3);

    int max = ((num1 > num2)?(num1>num3)? num1 :  num3) :((num2 > num3) ? num2 : num3);
    printf("\nMax Number = %d",max);

    return 0;
}
