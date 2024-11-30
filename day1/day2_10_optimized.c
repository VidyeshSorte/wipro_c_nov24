#include<stdio.h>
#include<math.h>

int main()
{
    int averagScore = 0;
    printf("Enter your average score:");
    scanf("%d", &averagScore);
    if (averagScore < 0 || averagScore > 100)
    puts("Invalid score entered");
    if(averagScore <= 50)
        puts("Your result is Fail");
    else if(averagScore <= 80)
        puts("Your result is Second Class");
    else if(averagScore <= 95)
        puts("Your result is First Class");
    else if(averagScore <= 100)
        puts("Your result is Distinction");
    else
        puts("Invalid score entered");
}