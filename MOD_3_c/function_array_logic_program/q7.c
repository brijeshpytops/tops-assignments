// 7. WAP Find out length of string without using inbuilt function
#include<stdio.h>

int main(){
    int size=0;
    char str[] = "Hello";

    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    printf("Length Of %s Is %d",str,size);
    return 0;
}