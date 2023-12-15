// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length;
    for (length = 0; str[length] != '\0' && str[length] != '\n'; length++);

    
    for (int j = length - 1; j >= 0; j--) {
        printf("%c\n", str[j]);
    }

    return 0;
}
