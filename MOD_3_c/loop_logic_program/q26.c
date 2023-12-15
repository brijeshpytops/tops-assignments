// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>

int main() {
    int end = 4;
    int total_sum = 0;
    
    for(int out_start = 1; out_start <= end; out_start++){
        int sum = 0;
        for (int in_start = 1; in_start <= out_start; in_start++){
            sum += in_start;
             
        }
        total_sum += sum;
    }
    printf("%d", total_sum);
    return 0;
}