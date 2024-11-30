#include "prime.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char* args[]) 
{
    int inputNumber = atoi(args[1]);
    printf("The input number is %d \n", inputNumber);
    if (checkPrime(inputNumber) == 1);
        printf("%d is Prime Number", inputNumber);
    else
        printf("%d is not a Prime number", inputNumber);
}