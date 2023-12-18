// 5. WAP to take two Array input from user and sort them in ascending or
// descending order as per user’s choice
#include<stdio.h>

int main(){
    int size_1,size_2,choice;

    printf("Enter Size Of First Array: ");
    scanf("%d", &size_1);

    printf("\nEnter Size Of Second Array: ");
    scanf("%d", &size_2);

    int arr_1[size_1],arr_2[size_2];

    for(int i=0;i<size_1;i++){
        printf("\nEnter %d element in Array 1:",i);
        scanf("%d", &arr_1[i]);
    }

    for(int i=0;i<size_2;i++){
        printf("\nEnter %d element in Array 2:",i);
        scanf("%d", &arr_2[i]);
    }

    printf("\n(1) For Ascending\n(2) For Descending\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            for(int i=0;i<size_1;i++){
                for(int j=i;j<size_2;j++){
                    if(arr_1[i]>arr_1[j]){
                        int temp_1 = arr_1[i];
                        arr_1[i] = arr_1[j];
                        arr_1[j] = temp_1;
                    }
                    if(arr_2[i]>arr_2[j]){
                        int temp_2 = arr_2[i];
                        arr_2[i] = arr_2[j];
                        arr_2[j] = temp_2;
                    }
                } 
            }
            printf("\nUpdated Array 1: ");
            for(int i=0;i<size_1;i++){
                printf("%d, ",arr_1[i]);
            }
            printf("\nUpdated Array 2: ");
            for(int i=0;i<size_2;i++){
                printf("%d, ",arr_2[i]);
            }
            break;
        case 2:
            for(int i=0;i<size_1;i++){
                for(int j=i;j<size_2;j++){
                    if(arr_1[i]<arr_1[j]){
                        int temp_1 = arr_1[i];
                        arr_1[i] = arr_1[j];
                        arr_1[j] = temp_1;
                    }
                    if(arr_2[i]<arr_2[j]){
                        int temp_2 = arr_2[i];
                        arr_2[i] = arr_2[j];
                        arr_2[j] = temp_2;
                    }
                }
            }
            printf("\nUpdated Array 1: ");
            for(int i=0;i<size_1;i++){
                printf("%d, ",arr_1[i]);
            }
            printf("\nUpdated Array 2: ");
            for(int i=0;i<size_2;i++){
                printf("%d, ",arr_2[i]);
            }
            break;
        default:
            printf("\nPlease Enter Valid Choice");
    }
    return 0;
}