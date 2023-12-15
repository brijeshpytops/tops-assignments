// WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
// 82746

#include<stdio.h>

int main() {
    int num, rev_num = 0, reminder;

    printf("Enter a num: ");
    scanf("%d", &num);

    while (num != 0) {
        reminder = num % 10;
        rev_num = rev_num * 10 + reminder;
        num /= 10;
    }
    printf("Reversed num: %d\n", rev_num);

    return 0;
}
