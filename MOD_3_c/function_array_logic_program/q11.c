// 11.WAP to accept 5 numbers from user and display in reverse order using for
// loop and array 
#include<stdio.h>
void pelindrome(int array[5]){
    for(int i=5-1;i>=0;i--){
        printf("%d, ",array[i]);
    }
}
int main(){ 
    int arr[5];
    for(int i=0;i<5;i++){
        printf("\nEnter %d Number element: ",i+1);
        scanf("%d", &arr[i]);
    }
    pelindrome(arr);
    return 0;
}