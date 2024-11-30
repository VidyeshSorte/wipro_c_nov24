
// Find the first occurrence of a character in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Find the character 't' in Maharashtra.";
    char ch = 't';

    char *ptr = strchr(str, ch);

    if (ptr) {
        printf("The first occurrence of '%c' is at position: %ld\n", ch, ptr - str + 1);
    } else {
        printf("The character '%c' is not found in the string.\n", ch);
    }
    return 0;
}