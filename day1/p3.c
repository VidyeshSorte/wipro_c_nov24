#include<stdio.h>
// check if number is even 

int main() 
{
    int inputNum = 0;
    puts("Enter a Number to check");
    scanf("%d", &inputNum);
    if (inputNum % 2 == 0)
        printf("%d an Even number", inputNum);
    else
        printf("%d is not an Even number", inputNum);
}