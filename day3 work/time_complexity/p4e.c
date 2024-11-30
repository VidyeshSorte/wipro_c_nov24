#include <stdio.h>

/* 4. Print the following shapes of N lines made up of Stars
E) X shape inside Hollow Square */

void printXInHollowSquare(int N) 
{
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // Print '*' for the border of the square
            if (i == 1 || i == N || j == 1 || j == N) 
            {
                printf("*");
            }
            else if (j == i || j == N - i + 1) 
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() 
{
    int N;

    printf("Enter the size of the square (odd number): ");
    scanf("%d", &N);

    if (N <= 0 || N % 2 == 0) {
        printf("Invalid input. N must be a positive odd number.\n");
        return 1;
    }

    printXInHollowSquare(N);

    return 0;
}