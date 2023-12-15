// Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("\nString after removing non-alphabetic characters: %s\n", str);

    return 0;
}
