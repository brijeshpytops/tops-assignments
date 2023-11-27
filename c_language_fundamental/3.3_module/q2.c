// WAP of Addition, Subtraction, Multiplication and Division using Switch
// case.(Must Be Menu Driven) 

#include<stdio.h>

int main(){
    float a,b;
    int c;
    printf("\n(1) for Addition\n(2) for Subtraction\n(3) for Multiplication\n(4) for Divison\nEnter Your choice:");
    scanf("%d",&c);
    printf("\nEnter value of A:");
    scanf("%f",&a);
    printf("\nEnter value of B:");
    scanf("%f",&b);
    switch(c){
        case 1:
            printf("%.2f",(a+b));
            break;
        case 2:
            printf("%.2f",(a-b));
            break;
        case 3:
            printf("%.2f",(a*b));
            break;
        case 4:
            if(b==0){
                printf("\nDivision by 0 is not possible");
            }else{
            printf("%.2f",(a/b));
            }
            break;
        default:
            printf("\nInvalid Operation. Please choose 1, 2, 3, or 4.");
            break;
    }
    return 0;
}