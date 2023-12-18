// 13.WAP to accept 5 numbers from user and check entered number is even or odd
// using of array
#include<stdio.h>
int main(){ 
    int arr[5];
    for(int i=0;i<5;i++){
        printf("\nEnter %d Number element: ",i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("\nEntered Number %d Is Even",arr[i]);
        }else{
            printf("\nEntered Number %d Is Odd",arr[i]);
        }
    }

    return 0;
}