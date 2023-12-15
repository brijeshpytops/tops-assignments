// WAP to take 10 no. Input from user find out below values
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers


#include<stdio.h>

int main() {
    int nums[10];
    int even_count = 0, odd_count = 0;
    int sum_e = 0, sum_o = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);

        if (nums[i] % 2 == 0) {
            even_count++;
            sum_e += nums[i];
        } else {
            odd_count++;
            sum_o += nums[i];
        }
    }

    printf("Number of even nums: %d\n", even_count);
    printf("Number of odd nums: %d\n", odd_count);
    printf("Sum of even nums: %d\n", sum_e);
    printf("Sum of odd nums: %d\n", sum_o);

    return 0;
}
