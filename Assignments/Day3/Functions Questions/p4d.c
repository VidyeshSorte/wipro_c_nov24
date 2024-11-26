#include <stdio.h>

/* 4. Print the following shapes of N lines made up of Stars
D) X Shape*/

void printXShape(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            // Print '*' for the two diagonals
            if (j == i || j == N - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Enter the size of the X (odd number): ");
    scanf("%d", &N);

    if (N <= 0 || N % 2 == 0) {
        printf("Invalid input. N must be a positive odd number.\n");
        return 1;
    }

    printXShape(N);

    return 0;
}