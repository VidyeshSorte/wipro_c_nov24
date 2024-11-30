#include <stdio.h>
// Declare 3 character variables and accept values, raining=r sunny=s cloudy=c
// Allow the person to go out only if it is:
//	1. only sunny
//	2. sunny and raining
int main() 
{
    char raining, sunny, cloudy;

    
    printf("Enter the weather conditions (r for raining, s for sunny, c for cloudy):\n");

    printf("Raining (r/s/c): ");
    scanf(" %c", &raining);  // Space before %c to consume any leftover space
    printf("Sunny (r/s/c): ");
    scanf(" %c", &sunny);
    printf("Cloudy (r/s/c): ");
    scanf(" %c", &cloudy);

    // Checking if the person can go out based on the conditions
    if ((sunny == 's' && raining == 'r') || (sunny == 's' && raining != 'r' && cloudy != 'c'))
        printf("You can go out!\n");
    else
        printf("You cannot go out.\n");
}