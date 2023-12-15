// 10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>

int main(){
    int num;

    printf("\nEnter Desired Integer: ");
    scanf("%d",&num);

    if(num==0){
        printf("\n%d is  Zero",num);
    }else if(num>0){
        printf("\n%d is  Positive",num);
    }else{
        printf("\n%d is Negative",num);
    }

    return 0;
}