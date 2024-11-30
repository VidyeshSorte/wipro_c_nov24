#include<stdio.h>
#include<math.h>

int main()
{
    int averagScore = 0;
    printf("Enter your average score:");
    scanf("%d", &averagScore);
    
    if(averagScore >= 0 && averagScore <= 50)
        puts("Your result is Fail");
    else if(averagScore >= 51 && averagScore <= 80)
        puts("Your result is Second Class");
    else if(averagScore >= 81 && averagScore <= 95)
        puts("Your result is First Class");
    else if(averagScore >= 96 && averagScore <= 100)
        puts("Your result is Distinction");
    else
        puts("Invalid score entered");
}