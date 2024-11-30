#include "prime.h"
#include <stdio.h>
#include <stdlib.h>

extern int inputNumber;
int main()
{
    readInput();
    if (checkPrime(inputNumber) == 1);
        printf("%d is Prime Number", inputNumber);
    else
        printf("%d is not a Prime number", inputNumber);
}