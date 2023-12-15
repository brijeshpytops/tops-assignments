// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include <stdio.h>

int main() {
    int stds;

    printf("Enter the number of students: ");
    scanf("%d", &stds);

    int apples = stds * 5;

    printf("Total apples : %d\n", apples);

    return 0;
}
