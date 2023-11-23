// WAP to show
// 1. Monday to Sunday using switch case
// 2. Vowel or Consonant using switch case 

// Task 1: Displaying Day of the Week

#include <stdio.h>

int main() {
    int day;

    // Input the day number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday)
    printf("Enter a day number (1 to 7): ");
    scanf("%d", &day);

    // Display the corresponding day using switch case
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number.\n");
    }

    return 0;
}


// Task 2: Checking Vowel or Consonant


#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel or consonant using switch case
    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }

    return 0;
}
