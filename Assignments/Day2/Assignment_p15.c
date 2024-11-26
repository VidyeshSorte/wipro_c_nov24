#include <stdio.h>
// Check if a character is an alphabet
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        printf("%c is an alphabet.\n", ch);
    else 
        printf("%c is not an alphabet.\n", ch);
}