// 1. Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>

int main(){
    int num1,num2;

    printf("\nEnter First Number: ");
    scanf("%d",&num1);

    printf("\nEnter Second Number: ");
    scanf("%d",&num2);

    if(num1==num2){
        printf("\n%d And %d Are Equal",num1,num2);
    }else{
        printf("\n%d And %d Are Not Equal",num1,num2);
    }

    return 0;
}