//1. Find factorial of a number using recursion.
#include <stdio.h>
#include <stdlib.h>

// Recursive function
unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    unsigned long long result = factorial(number);
    printf("Factorial of %d is %llu\n", number, result);
}