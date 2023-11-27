// WAP to find reverse of string using recursion
#include<stdio.h>

void rev(char arr[],int start,int end){
    if(start>=end){
        return;
    }
    char temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    rev(arr,start+1,end-1);
}

int main(){
    char str[100];
    int size;
    printf("\nEnter a string:");
    scanf("%99s",&str);
    for(int i=0;str[i]!='\0';i++){
        size = i+1;
    }
    rev(str,0,(size-1));
    printf("%s",str);  
}