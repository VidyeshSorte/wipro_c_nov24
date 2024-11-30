#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Programming";
    char str2[] = "Program";
    int n = 7;

    // Compare the first n characters of str1 and str2
    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("The first %d characters of \"%s\" and \"%s\" are equal.\n", n, str1, str2);
    } else if (result < 0) {
        printf("The first %d characters of \"%s\" are less than \"%s\".\n", n, str1, str2);
    } else {
        printf("The first %d characters of \"%s\" are greater than \"%s\".\n", n, str1, str2);
    }

    return 0;
}