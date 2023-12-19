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


1  2  3  4  5  6  7  8  9 10 
36 37 38 39 40 41 42 43 44 11 
35 64 65 66 67 68 69 70 45 12 
34 63 84 85 86 87 88 71 46 13 
33 62 83 96 97 98 89 72 47 14 
32 61 82 95 100 99 90 73 48 15 
31 60 81 94 93 92 91 74 49 16 
30 59 80 79 78 77 76 75 50 17 
29 58 57 56 55 54 53 52 51 18 
28 27 26 25 24 23 22 21 20 19 


#include <stdio.h>

void spiral_matrix(int n, int matrix[n][n]) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }
}

void prints_m(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 10;

    int s_m[n][n];
    spiral_matrix(n, s_m);
    prints_m(n, s_m);

    return 0;
}
