// Looping programs:
// 1. WAP to print 972 to 897 using for loop
// 2. WAP to take 10 no. Input from user and find out …
// 3. How many Even numbers are there
// 4. How many odd numbers are there
// 5. Sum of even numbers
// 6. Sum of odd numbers WAP to print table up to given numbers

// Task - 1
// --------

#include <stdio.h>

int main() {
    for (int i = 972; i >= 897; i--) {
        printf("%d ", i);
    }

    return 0;
}


// Task - 2
// --------
#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
            sumEven += num;
        } else {
            oddCount++;
            sumOdd += num;
        }
    }

    // Task - 3
    // --------
    printf("Number of even numbers: %d\n", evenCount);
    // Task - 4
    // --------
    printf("Number of odd numbers: %d\n", oddCount);
    // Task - 5
    // --------
    printf("Sum of even numbers: %d\n", sumEven);
    // Task - 6
    // --------
    printf("Sum of odd numbers: %d\n", sumOdd);
return 0;
}