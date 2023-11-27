// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>

void asd(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",arr[i]);
    }
}

void dsc(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",arr[i]);
    }
}


int main(){
    int n,c;
    printf("\nEnter a size of Array: ");
    scanf("%d",&n);
    int usr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter a Value of %d Element of Array: ",i+1);
        scanf("%d",&usr[i]);
    }

    printf("\n(1) for Ascending\n(2) for Descending\nEnter Your Choice: ");
    scanf("%d",&c);
    
    switch(c){
        case 1:
            printf("\nUpdated Array In Ascending Order:");
            asd(usr,n);
            break;
        case 2:
            printf("\nUpdated Array In Descending Order:");
            dsc(usr,n);
            break;
        default:
            printf("\nPlease Choose Either 1 or 2");
    }
    return 0;
}