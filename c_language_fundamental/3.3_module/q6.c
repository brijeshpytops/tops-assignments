// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 
#include<stdio.h>

int main(){
    int mtx1[2][2],mtx2[2][2],res[2][2],c;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nEnter [%d][%d] Element of Matrix1: ",i+1,j+1);
            scanf("%d",&mtx1[i][j]);
        }
    }
    printf("\nMatrix1 is As Below-\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mtx1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nEnter [%d][%d] Element of Matrix2: ",i+1,j+1);
            scanf("%d",&mtx2[i][j]);
        }
    }
    printf("\nMatrix2 is As Below-\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",mtx2[i][j]);
        }
        printf("\n");
    }
    printf("\n1 for Addition\n2 for Subtraction\n3 for multiplication\nEnter Your Choice: ");
    scanf("%d",&c);

    switch(c){
        case 1:
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    res[i][j] = mtx1[i][j] + mtx2[i][j];
                }
            }
            printf("\nResult Matrix is As Below-\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%d ",res[i][j]);
                }
                printf("\n");
            }
            break;  
        case 2:
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    res[i][j] = mtx1[i][j] - mtx2[i][j];
                }
            }
            printf("\nResult Matrix is As Below-\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%d ",res[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    res[i][j] = mtx1[i][j] * mtx2[i][j];
                }
            }
            printf("\nResult Matrix is As Below-\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%d ",res[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("\nPlease Enter 1, 2 or 3 as per your choice");
            main();
    }
    return 0;
}