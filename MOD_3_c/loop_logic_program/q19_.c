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


// A
// BC
// DEF
// GHIJ

#include <stdio.h>

int main() {
    int num = 5, g = 1;

    for (int row = 1; row <= num; row++) {
        for(int col = 1; col<=row; col++){
            printf("%c", g+64);
            g++;
        }
        printf("\n");
    }

    return 0;
}


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


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 


#include <stdio.h>

int main() {
    int num = 5, g = 1;

    for (int row = 1; row <= num; row++) {
        for(int col = 1; col<=row; col++){
            printf("%d ", g);
            g++;
        }
        printf("\n");
    }

    return 0;
}


//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
#include <stdio.h>

int main() {
    int num = 5;
    for (int row = 1; row <= num; row++) {
        for(int col = num-1; col>=row; col--){
            printf("  ");
        }
        for(int col = 1; col<=row; col++){
            printf("* ");
        }
        for(int col = 1; col<=row-1; col++){
            printf("* ");
        }
        printf("\n");
    }
    
    
    return 0;
}

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

#include <stdio.h>

int main() {
    int num = 5;

    for (int row = 1; row <= num; row++) {
        for(int col = 1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }
    for (int row = num-1; row >= 1; row--) {
        for(int col = 1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}