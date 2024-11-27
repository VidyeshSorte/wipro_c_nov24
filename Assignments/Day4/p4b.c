#include <stdio.h>

/* 4. Print the following shapes of N lines made up of Stars
B) Pyramid (Equilateral Triangle)*/

void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces to center the stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Enter the number of lines for the pyramid: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. N must be greater than 0.\n");
        return 1;
    }

    printPyramid(N);

    return 0;
}