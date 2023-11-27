// WAP Find out length of string without using inbuilt function
#include<stdio.h>

int main(){
    char str[100];
    int len=0;

    printf("\nEnter Your String :");
    scanf("%s",&str);

    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    printf("\nLength of String: %d",len);
    return 0;
}