// 3. WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>

void reverse(char arr[], int start,int end){
    if(start >= end){
        return;
    }
    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse(arr,(start+1),(end-1));
}

int main(){
    char str[] = "Hello";
    int len = strlen(str);

    reverse(str,0,len-1);

    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
    return 0;
}