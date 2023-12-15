// Write a program in C to count the total number of vowels or consonants in a
// string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char lwr_ch = tolower(str[i]);

        if (lwr_ch >= 'a' && lwr_ch <= 'z') {
            if (lwr_ch == 'a' || lwr_ch == 'e' || lwr_ch == 'i' || lwr_ch == 'o' || lwr_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Printing the counts
    printf("\nTotal number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
