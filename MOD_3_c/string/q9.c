// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int max_counter = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        max_counter++;
    }

    printf("%d\n", max_counter);

    return 0;
}
