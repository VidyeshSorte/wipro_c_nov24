#include <stdio.h>
// p29 Count the number of Even digits in a number
int main() {
    int number, digit;
    int evenCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);


    while (number > 0) {
        digit = number % 10;
        if (digit % 2 == 0) { // Check if the digit is even
            evenCount++;
        }
        number = number / 10;
    }

    printf("The number of even digits is: %d\n", evenCount);

}