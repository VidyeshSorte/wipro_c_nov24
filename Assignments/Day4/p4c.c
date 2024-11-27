#include <stdio.h>
 /* 4. Print the following shapes of N lines made up of Stars
C) Hollow Square */

void printHollowSquare(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // Print '*' for the border of the square
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else { 
                // Print space for the inside of the square
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Enter the size of the square (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. N must be greater than 0.\n");
        return 1;
    }

    printHollowSquare(N);

    return 0;
}