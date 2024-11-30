#include <stdio.h>
// p30 Find sum of Even placed digits in a number
int main() {
    int number, digit, position = 1;
    int evenPositionSum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        if (position % 2 == 0) {
            evenPositionSum += digit;
        }
        number = number / 10;
        position++; // Move to the next position
    }

    printf("The sum of even placed digits is: %d\n", evenPositionSum);

}