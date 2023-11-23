// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

#include <stdio.h>

int main() {
    int num = 5;

    for (int row = 1; row <= num; row++) {
        for(int col = 1; col<=row; col++){
            printf("%c ", col+64);
        }
        printf("\n");
    }

    return 0;
}
