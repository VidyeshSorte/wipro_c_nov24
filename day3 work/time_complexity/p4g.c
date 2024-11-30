#include <stdio.h>

void printHexagon(int N) 
{
    int i, j;

    // Upper part of the hexagon
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N - i - 1; j++) 
        {
            printf(" ");
        }

        for (j = 0; j < N + i; j++) 
        {
            if (j == 0 || j == N + i - 1) 
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower part of the hexagon
    for (i = N - 2; i >= 0; i--) {
        for (j = 0; j < N - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j < N + i; j++) 
        {
            if (j == 0 || j == N + i - 1) 
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() 
{
    int N;
    printf("Enter the size of the hexagon (N): ");
    scanf("%d", &N);
    printHexagon(N);
}