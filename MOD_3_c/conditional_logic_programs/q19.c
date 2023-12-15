// 19.Write a program in C to calculate and print the electricity bill of a given
// customer. The customer ID, name, and unit consumed by the user should
// be captured from the keyboard to display the total amount to be paid to the
// customerThe charge are as follow :
// 20. Unit 21. Charge/unit
// 22. upto 350 23. @1.20
// 24. 350 and above but less than 600 25. @1.50
// 26. 600 and above but less than 800 27. @1.80
// 28. 800 and above 29. @2.00
// 30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
// the minimum bill should be of Rs. 256/-

#include<stdio.h>

int main(){
    int customerId,consumedUnit;
    char customerName[100];
    float total;

    printf("\nEnter Your Name: ");
    scanf("%s",customerName);

    printf("\nEnter Your ID: ");
    scanf("%d",&customerId);

    printf("\nEnter Your Consumed Unit: ");
    scanf("%d",&consumedUnit);

    if(consumedUnit<350){
        total = (float)consumedUnit*(23.0/1.2);
    }else if(consumedUnit>=350 && consumedUnit<600){
        total = (float)consumedUnit*(25.0/1.5);    
    }else if(consumedUnit>=600 && consumedUnit<800){
        total = (float)consumedUnit*(27.0/1.8);    
    }else{
        total = (float)consumedUnit*(29.0/2.0);        
    }

    if(total>=800){
        total =(total*18)/100;
        printf("\n%s Your Bill is  %.2f/-",customerName,total);
    }else if(total<256){
        total = 256;
        printf("\n%s Your Bill is %.2f/-",customerName,total);
    }
    return 0;
}