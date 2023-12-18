// 15.Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main(){ 
    int arr[5];
    for(int i=0;i<5;i++){
        printf("\nEnter %d Number element: ",i+1);
        scanf("%d", &arr[i]);
    }
        printf("\nUpdated Array: ");
    for(int i=0;i<5;i++){
       for(int j=i;j<5;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        } 
        printf("%d, ",arr[i]);
    }  

    return 0;
}