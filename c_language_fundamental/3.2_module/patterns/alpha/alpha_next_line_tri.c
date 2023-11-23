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
