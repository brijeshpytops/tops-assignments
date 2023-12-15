
// Accept 3 numbers from user using while loop and check each numbers
// palindrome

#include<stdio.h>

int main() {
    int num, o_num, r_num, remainder;

    int i = 1;
    while (i <= 3) {
        printf("Enter num %d: ", i);
        scanf("%d", &num);

        o_num = num;
        r_num = 0;

        while (o_num != 0) {
            remainder = o_num % 10;
            r_num = r_num * 10 + remainder;
            o_num /= 10;
        }

        if (num == r_num) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        i++;
    }

    return 0;
}
