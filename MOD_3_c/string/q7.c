// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    strcpy(str2, str1);

    printf("Original String: %s", str1);
    printf("Copied String: %s", str2);

    return 0;
}
