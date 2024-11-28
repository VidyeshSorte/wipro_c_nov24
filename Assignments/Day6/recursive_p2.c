// 2. Find sum of digits of a number
#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main(int argc, char *argv[]) 
{
    if (argc != 2) 
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    int result = sumOfDigits(number);

    printf("Sum of digits of %d is %d\n", number, result);
}