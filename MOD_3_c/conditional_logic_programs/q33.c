// 33. WAP to input the week number and print week day
#include<stdio.h>
int main(){
    int c;

    printf("\nEnter Your Choice\n(1) Monday\n(2) Tuesday\n(3) Wednesday\n(4) Thursday\n(5) Friday\n(6) Saturday\n(7) Sunday : ");
    scanf("%d",&c);

    switch(c){
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nEnter Valid Number");
    }
    return 0;
}