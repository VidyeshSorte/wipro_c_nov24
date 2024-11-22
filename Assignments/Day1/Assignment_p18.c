#include <stdio.h>
//Check if a letter is small case
int main() {
    char ch;

    // Asking the user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is a lowercase letter
    if (ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase letter.\n", ch);
    else
        printf("%c is not a lowercase letter.\n", ch);
}