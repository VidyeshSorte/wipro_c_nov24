
//find the last occurrence of a character in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Locate the last occurrence of 'c' in this string.";
    char ch = 'c';

    // Use strrchr to find the last occurrence of 'c'
    char *ptr = strrchr(str, ch);

    if (ptr) {
        printf("The last occurrence of '%c' is at position: %ld\n", ch, ptr - str + 1);
    } else {
        printf("The character '%c' is not found in the string.\n", ch);
    }

    return 0;
}