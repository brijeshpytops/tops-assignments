// Write a C Program to Print the Multiplication Table of N
// i. E.g. 5 * 1 = 5
// ii. 5 * 2 = 10
// 1. .
// 2. .
// iii. 5 * 10 = 50

#include <stdio.h>

int main() {
    int table = 5;
    int start = 1, end = 10;
    
    for(start;start<=end;start+=1){
        printf("%d * %d = %d\n", table, start, start * table);
    }

    return 0;
}
