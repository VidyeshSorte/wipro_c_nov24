#include <stdio.h>
#include <stdbool.h>

// Find Nth Prime number
bool isPrime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int findNthPrime(int N) 
{
    int count = 0;
    int num = 1;

    while (count < N) 
    {
        num++;
        if (isPrime(num)) 
        {
            count++;
        }
    }
    return num;
}

int main() 
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0) 
    {
        printf("Invalid input. N must be greater than 0.\n");
        return 1;
    }

    int nthPrime = findNthPrime(N);
    printf("The %dth prime number is: %d\n", N, nthPrime);

    return 0;
}