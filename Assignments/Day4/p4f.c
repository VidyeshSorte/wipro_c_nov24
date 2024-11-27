#include <stdio.h>

/* 4. Print the following shapes of N lines made up of Stars
F) Hollow Rhombus */

void printHollowRhombus(int N) {
    // Loop for the upper part of the rhombus
    for (int i = 1; i <= N; i++) {
        // Loop for spaces before stars in each row
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Loop to print stars and spaces inside the rhombus
        for (int j = 1; j <= N; j++) {
            if (j == 1 || j == N || j == i || j == N - i + 1) {
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

    printf("Enter the size of the rhombus (odd number): ");
    scanf("%d", &N);

    if (N <= 0 || N % 2 == 0) {
        printf("Invalid input. N must be a positive odd number.\n");
        return 1;
    }

    printHollowRhombus(N);

    return 0;
}