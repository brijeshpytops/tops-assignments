// 6. WAP to make addition, Subtraction and multiplication of two matrix using
// 2-D Array
#include<stdio.h>

int main(){
    int arr_1[2][2] = {{1,2},{3,4}};
    int arr_2[2][2] = {{4,3},{2,1}};
    int arr_result[2][2];
    int choice;

    printf("\n(1) For Addition\n(2) For Subtraction\n(3) For Multiplication\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    arr_result[i][j] = arr_1[i][j] + arr_2[i][j];
                }
            }
            break;
        case 2:
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    arr_result[i][j] = arr_1[i][j] - arr_2[i][j];
                }
            }
            break;
        case 3:
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    arr_result[i][j] = arr_1[i][j] * arr_2[i][j];
                }
            }
            break;
        default:
            printf("\nPlease Enter Valid Choice");
    }

    printf("\nResult Array : ");
    for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%d, ",arr_result[i][j]);
                }
            }
    
    return 0;
}