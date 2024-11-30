// Find a substring in a string

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Welcome to the world of C programming.";
    char substr[] = "world";

    char *ptr = strstr(str, substr);

    if (ptr) {
        printf("Substring \"%s\" found at position: %ld\n", substr, ptr - str + 1);
    } else {
        printf("Substring \"%s\" not found in the string.\n", substr);
    }
    return 0;
}