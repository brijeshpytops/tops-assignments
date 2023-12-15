// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], word[100];
    int i = 0, max_len = 0, min_len = 100, max_index = 0, min_index = 0;

    printf("Enter a sentence: ");
    gets(str1);

    while (sscanf(str1 + i, "%s", word) == 1) {
        int len = strlen(word);

        if (len > max_len) {
            max_len = len;
            max_index = i;
        }

        if (len < min_len) {
            min_len = len;
            min_index = i;
        }

        i += len + 1;
    }
    
    printf("Largest Word is %.*s\nSmallest word is %.*s\n", max_len, str1 + max_index, min_len, str1 + min_index);

    return 0;
}
