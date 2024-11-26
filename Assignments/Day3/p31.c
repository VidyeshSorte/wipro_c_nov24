#include <stdio.h>
// Find sum of Odd placed digits in a number
int main() {
    int number, digit;
    int oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);


    while (number > 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            oddSum += digit;
        }
        number = number / 10;
    }

    printf("The sum of odd digits is: %d\n", oddSum);

}