// 4. WAP to find factorial using recursion
#include<stdio.h>

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int a = 5;

    printf("Factorial = %d",(fact(5)));

    return 0;
}
