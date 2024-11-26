#include <stdio.h>
// Check if a number is Palindrome
int main() {
    int number, originalNumber, reversedNumber = 0, digit;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number; // Store the original number

    // Reverse the number
    while (number > 0) {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
    }

    if (originalNumber == reversedNumber) {
        printf("The number %d is a Palindrome.\n", originalNumber);
    } else {
        printf("The number %d is not a Palindrome.\n", originalNumber);
    }

}