// 3. WAP to check if the given year is a leap year or not.
#include<stdio.h>

int main(){
    int year;

    printf("\nEnter Desired Year: ");
    scanf("%d",&year);

    if(year%400==0){
        printf("\n%d is Leap Year",year);
    }else if(year%4==0 && year%100!=0){
        printf("\n%d is Leap Year",year);
    }else{
        printf("\n%d is Leap Not a Year",year);
    }

    return 0;
}