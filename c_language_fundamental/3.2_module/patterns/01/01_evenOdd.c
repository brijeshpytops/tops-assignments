// 1
// 10
// 101
// 1010
// 10101

#include <stdio.h>

int main() {
    int num = 5;

    for (int row = 1; row <= num; row++) {
        for(int col = 1; col<=row; col++){
            if (col % 2 == 0){
                printf("0");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
