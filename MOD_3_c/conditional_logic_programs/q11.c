// 11.WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main(){
    int num;

    printf("\nEnter Desired Integer: ");
    scanf("%d",&num);

    (num%2==0)?printf("\n%d Is Even",num):printf("\n%d Is Odd",num);

    return 0;
}