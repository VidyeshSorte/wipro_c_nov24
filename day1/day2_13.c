#include <stdio.h>
// accept day number from the user and print the event of the college fest

int main()
{
    int dayNumber = 0;
    puts("Enter the day number to print the event");
    scanf("%d", &dayNumber);
    switch(dayNumber)
    {
        case 1 : puts("Monday-Sports"); break;
        case 2 : puts("Tuesday- Technical"); break;
        case 3 : puts("Wednesday-Cultural"); break;
        case 4 : puts("Thursday-Tthnical"); break;
        case 5 : puts("Friday-Funky"); break;
        case 6 : puts("Saturday-Charity"); break;
        case 7 : puts("Go back home and sleep"); break;
    }
}