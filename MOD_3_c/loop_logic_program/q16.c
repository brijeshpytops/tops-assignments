// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int sum = 0, start = 0, end;
    printf("Enter a  num: ");
    scanf("%d", &end);
    while(start<=end){
        sum += start;
        start+=1;
    }
    printf("Total sum : %d\n", sum);

    return 0;
}
