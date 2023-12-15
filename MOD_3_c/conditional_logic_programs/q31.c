// 31.Write a program in C to read any Month Number in integer and display the
// number of days for this month.
#include<stdio.h>

int main(){
    int month;

    printf("\nEnter Desired Month: ");
    scanf("%d",&month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n%d Month Got 31 Days",month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n%d Month Got 30 Days",month);
            break;
        case 2:
            printf("\nIf This Is Leap Year, It will be 29 Days otherwise It will be 28 Days");
            break;
        default:
            printf("\nPlease Enter Valid Month");
    }

    return 0;
}