
//copy one string to another
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Maharashtra";
    char destination[20];

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}