// 36. Write a C program to input electricity unit charges and calculate total
// electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
#include<stdio.h>

int main(){
    int unit;
    float total=0;

    printf("\nEnter Consumed Unit: ");
    scanf("%d",&unit);

    if(unit<=50){
        total = (float)unit*(0.5);
    }else if(unit>50 && unit<=150){
        total = (float)unit*(0.75);
    }else if(unit>150 && unit<=250){
        total = (float)unit*(1.2);
    }else{
        total = (float)unit*(1.5);
    }

    total *= (20.0/100.0);
    printf("\nElectricity Bill: %.2f",total);

    return 0;
}