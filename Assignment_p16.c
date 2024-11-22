#include <stdio.h>
// Check if a character is an alphanumeric
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is alphanumeric
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        printf("%c is an alphanumeric character.\n", ch);
    else
        printf("%c is not an alphanumeric character.\n", ch);
}