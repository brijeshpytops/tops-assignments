// 1 + 2 + 3 + 4 + 5 + ... + n


#include <stdio.h>

int main() {
    int end = 5;
    int sum = 0;
    
    for(int start = 1; start <= end; start++){
        if (start != end){
            printf("%d + ", start);
        }else{
            printf("%d = ", start);
        }
        sum +=start;
    }
    printf("%d", sum);
    return 0;
}