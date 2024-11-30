
//concatenate two strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Maharashtra, ";
    char str2[] = "Karnataka";

    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);
    return 0;
}