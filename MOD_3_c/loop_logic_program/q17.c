// Calculate 5 numbers from user and calculate number of even and odd using
// of while loop

#include <stdio.h>

int main() {
    int start = 1, end = 5, even = 0, odd = 0;
    
    while(start<=end){
        int new_num;
        printf("Enter a num-%d: ", start);
        scanf("%d", &new_num);
        
        if(new_num%2==0){
            even += 1;
        } else{
            odd += 1;
        }
        start+=1;
    }
    printf("Total Even : %d\n", even);
    printf("Total Odd : %d\n", odd);

    return 0;
}
