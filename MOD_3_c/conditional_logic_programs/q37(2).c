// ii. Vowel or Consonant using switch case
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;

    printf("\nEnter Desired Character: ");
    scanf("%c",&ch);

    switch(tolower(ch)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c Is Vowel",ch);
            break;
        default:
            printf("\n%c Is Consonant",ch);
    }

    return 0;
}