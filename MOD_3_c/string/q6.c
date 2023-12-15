// Write a program in C to count the total number of alphabets, digits and special
// characters in a string

#include <stdio.h>

int main() {
    char str[100];
    int alpha = 0, digits = 0, specials_symbols = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alpha++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specials_symbols++;
        }
    }

    printf("\nalpha: %d\n", alpha);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials_symbols);

    return 0;
}
