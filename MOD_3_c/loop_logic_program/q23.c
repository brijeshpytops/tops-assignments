// C Program to Reverse a Number Using FOR Loop

#include<stdio.h>

int main() {
    int num, o_num, r_num = 0, remainder;

    printf("Enter a num: ");
    scanf("%d", &num);


    for (o_num = num; o_num != 0; o_num /= 10) {
        remainder = o_num % 10;
        r_num = r_num * 10 + remainder;
    }

    printf("Reversed num: %d\n", r_num);

    return 0;
}
