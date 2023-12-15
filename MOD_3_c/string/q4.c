// Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int word_count = 0;
    int is_word = 0; 

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            is_word = 0; 
        } else if (!is_word) {
            
            word_count++;
            is_word = 1; 
        }
    }

    printf("Total number of words in the string: %d\n", word_count);

    return 0;
}
