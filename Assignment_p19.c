#include <stdio.h>
//Check if a year is Leap year
int main() {
    int year;

    // Asking the user to input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}