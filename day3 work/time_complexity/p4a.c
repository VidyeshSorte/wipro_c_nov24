#include <stdio.h>

/* 4. Print the following shapes of N lines made up of Stars
A) Right Angled Triangle*/

void printRightAngledTriangle(int N) 
{
    for (int i = 1; i <= N; i++) { // Loop for rows
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

int main() 
{
    int N;

    printf("Enter the number of lines for the triangle: ");
    scanf("%d", &N);

    if (N <= 0) 
    {
        printf("Invalid input. N must be greater than 0.\n");
        return 1;
    }

    printRightAngledTriangle(N);

    return 0;
}