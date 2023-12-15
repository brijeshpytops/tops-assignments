// WAP to print table up to given numbers

#include<stdio.h>

int main() {
    int num, last=10;

    printf("Enter a num: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= last; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
