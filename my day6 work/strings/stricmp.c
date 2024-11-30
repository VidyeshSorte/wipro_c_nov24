

#include <stdio.h>
#include <string.h>

// Case-insensitive string comparison using stricmp
int main() {
    char str1[] = "HelloWorld";
    char str2[] = "helloworld";

    int result = stricmp(str1, str2);

    if (result == 0) {
        printf("The strings \"%s\" and \"%s\" are equal (case-insensitive).\n", str1, str2);
    } else if (result < 0) {
        printf("The string \"%s\" is less than \"%s\" (case-insensitive).\n", str1, str2);
    } else {
        printf("The string \"%s\" is greater than \"%s\" (case-insensitive).\n", str1, str2);
    }

    return 0;
}