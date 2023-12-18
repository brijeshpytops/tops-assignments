// 8. WAP to reverse a string and check that the string is palindrome or not
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
    char str[] = "Nayan";
    int len = strlen(str);
    char temp_str[len]; 
    strcpy(temp_str,str);
    

    reverse(str,0,len-1);

    int flag = 1;
    for(int i=0;i<len;i++){
        if(tolower(str[i])!=tolower(temp_str[i])){
            flag = 0;
        }
    }

    if(flag){
        printf("\nYour String is Pelindrome");
    }else{
        printf("\nYour String is not Pelindrome");
    }
    return 0;
}