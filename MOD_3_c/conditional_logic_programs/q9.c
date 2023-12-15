// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>

int main(){
    char ch;

    printf("\nEnter Your Desired character: ");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("\n%c is Digit",ch);
    }else if(ch>='a' && ch<='z'){
        printf("\n%c is Lower Case",ch);
    }else if(ch>='A' && ch<='Z'){
        printf("\n%c is Upper Case",ch);
    }else{
        printf("\n%c is Special Character",ch);
    }
    return 0;
}