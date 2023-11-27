// WAP to find factorial using recursion 
#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;

    printf("\nEnter a Integer number:");
    scanf("%d",&n);
    if(n<0){
        printf("\nFactorial for Negative is not possible");
    }else{
        printf("\nFactorial is : %d",fact(n));
    }
    return 0;
}