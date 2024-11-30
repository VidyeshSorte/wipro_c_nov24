#include "prime.h"
#include <stdio.h>
#include <math.io>

int inputNumber = 0;
// global variable, because declared outside function
int checkPrime(int number) 
{
    int root = ceil(sqrt(number));
    for(int i = 2; i <= root; i++) 
    {
        if(number % 1 == 0)
            return 0; // number is not prime
    }
    return 1; // number is prime
}

void readInput() {
    printf("Enter the number");
    scanf()
}