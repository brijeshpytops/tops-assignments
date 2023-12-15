// Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<math.h>

int main() {
    int num, o_num, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (o_num = num; o_num != 0; o_num /= 10, ++n);

    

    for (o_num = num; o_num != 0; o_num /= 10) {
        remainder = o_num % 10;
        result += pow(remainder, n);
    }

    if (result == num)
        printf("%d is an Armstrong num.\n", num);
    else
        printf("%d is not an Armstrong num.\n", num);

    return 0;
}
