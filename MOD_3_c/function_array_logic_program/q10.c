// 10.WAP to perform Palindrome number using for loop and function
#include<stdio.h>
int pelindrome(int n){
    int reverse_num=0, flag = 1, reminder;
    int temp = n;
    for(int i = 10 ; n > 0; n/=10 ){
        reminder = n % i;
        reverse_num = reverse_num*10 + reminder;
    }
    if(reverse_num != temp){
        flag = 0;
    }
    return flag;
}
int main(){ 
    int num = 12321;

    if(pelindrome(num)){
        printf("\nNumber is pelindrome");
    }else{
        printf("\nNumber is not pelindrome");
    }
    
    return 0;
}