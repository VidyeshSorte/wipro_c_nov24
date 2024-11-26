#include <stdio.h>
#include <stdlib.h>

// Find sum of Even placed Odd digits in a number
int main(int argCount, char *args[]) {
    int inputNumber = atoi(args[1]);
    int sumOfDigits1 = 0, sumOfDigits2 = 0, flip = 0, remainderDigit = 0;
    printf("User given number is %d \n", inputNumber);

    while (inputNumber != 0) {
        remainderDigit = inputNumber % 10;
        inputNumber = inputNumber / 10;

        if (flip == 1) {
            if (remainderDigit % 2 != 0) {
                sumOfDigits1 += remainderDigit;
            }
            flip = 0;
        } else {
            if (remainderDigit % 2 != 0) {
                sumOfDigits2 += remainderDigit;
            }
            flip = 1;
        }
    }

    if (flip == 0) {
        printf("Sum of Even placed Odd digits is %d\n", sumOfDigits1);
    } else {
        printf("Sum of Even placed Odd digits is %d\n", sumOfDigits2);
    }

}