// Write a program in C to find the number of times a given word 'is' appears in
// the given string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], find_is[] = "is";
    int count = 0;

    
    printf("Enter a str: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == find_is[0]) {
            int match = 1; 

            for (int j = 1; find_is[j] != '\0'; j++) {
                if (str[i + j] != find_is[j]) {
                    match = 0; 
                    break;
                }
            }

            if (match) {
                count++;
            }
        }
    }

    printf("The word '%s' appears %d times in the str.\n", find_is, count);

    return 0;
}
