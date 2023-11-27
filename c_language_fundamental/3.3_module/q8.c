// WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100],rev[100];
    int len=0,n=0,res=1;

    printf("\nEnter Your String: ");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    for(int i=(len-1);i>=0;i--){
        rev[n] = str[i];
        n++;
    }
    for(int i=0;i<len;i++){
        if(tolower(rev[i])!=tolower(str[i])){
            res = 0;
        }
    }
    if(res == 1){
        printf("\nYour String is Pelindrome");
    }else{
        printf("\nYour String is not Pelindrome");
    }
    return 0;
}