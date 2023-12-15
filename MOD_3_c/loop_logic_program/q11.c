// Accept 5 names from user at run time.

#include <stdio.h>

int main() {
    char names[5][50]; 
    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }
    
    printf("\nEntered names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }
   
}