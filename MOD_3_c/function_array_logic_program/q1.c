// 1. Write a program to find out the max number from given array using function
#include<stdio.h>

    int max(int array[],int size){
        int max = array[0];
        for(int i=1;i<size;i++){
            if(array[i]>max){
                max = array[i];
            }
        }
        return max;
    } 

int main(){
     int num[] = {3,5,2,7,10,7,0};
     int size = sizeof(num)/sizeof(num[0]);

     printf("\nMaximum Number= %d",max(num,size));
    
    return 0;
}
