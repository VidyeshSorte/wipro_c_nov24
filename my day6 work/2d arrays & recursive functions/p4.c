// 4. Print the Fibo series of N terms (1st 2 terms are 1 and 2)
#include <stdio.h>
#include <stdlib.h>

void printFibonacci(int n, int a, int b) 
{
    if (n == 0) 
    {
        return;
    }
    printf("%d ", a);
    printFibonacci(n - 1, b, a + b);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    printf("Fibonacci series of %d terms is: ", n);
    printFibonacci(n, 1, 2); // Start with the first two terms as 1 and 2
    printf("\n");
}