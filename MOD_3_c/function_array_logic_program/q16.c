// 16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main(){ 
    int arr[5],sum=0;
    for(int i=0;i<5;i++){
        printf("\nEnter %d Number element: ",i+1);
        scanf("%d", &arr[i]);
    }
        printf("\nUpdated Array: ");
    for(int i=0;i<5;i++){
       sum +=arr[i];
    }  
    printf("\nTotal Sum = %d",sum);

    return 0;
}