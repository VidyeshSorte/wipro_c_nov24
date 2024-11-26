#include <stdio.h>

int main() {
    int number, i;
    int term = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) { //loop

        term *= number;
        sum += term;
    }

    printf("The sum of the series n + n^2 + n^3 + ... for 10 terms is: %d\n", sum);

}