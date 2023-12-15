// 5. Check Number Is Positive or Negative
#include<stdio.h>

int main(){
    int num;

    printf("\nEnter Desired Integer: ");
    scanf("%d",&num);

    if(num==0){
        printf("\n%d is Not Positive nor Negative",num);
    }else if(num>0){
        printf("\n%d is  Positive",num);
    }else{
        printf("\n%d is Negative",num);
    }

    return 0;
}