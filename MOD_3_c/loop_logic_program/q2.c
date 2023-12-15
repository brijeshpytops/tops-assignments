// WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>

int main() {
    int nums[5];

    printf("Enter 5 nums:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Entered nums: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
