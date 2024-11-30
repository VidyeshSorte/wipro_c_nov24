#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime

bool isPrime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to print prime numbers
void printPrimesInRange(int M, int N) 
{
    printf("Prime numbers between %d and %d in decreasing order:\n", M, N);

    for (int num = N; num >= M; num--) 
    {
        if (isPrime(num)) 
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() 
{
    int M, N;

    printf("Enter the value of M: ");
    scanf("%d", &M);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (M > N) 
    {
        printf("Invalid input. M should be less than or equal to N.\n");
        return 1;
    }

    printPrimesInRange(M, N);

    return 0;
}