// Write a program in C to compare two strings without using string library
// functions.
#include <stdio.h>

int compare_strings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }

    
    if (str1[i] != '\0' || str2[i] != '\0') {
        return 0; 
    }

    return 1; 
}

int main() {
    char str_1[] = "Hello";
    char str_2[] = "Helto";

    if (compare_strings(str_1, str_2)) {
        printf("equal.\n");
    } else {
        printf("not equal.\n");
    }

    return 0;
}
