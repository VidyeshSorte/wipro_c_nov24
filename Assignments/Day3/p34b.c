#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argCount, char *args[])
{
    int termValue = atoi(args[1]);
    int numberOfTerms = atoi(args[2]);
    long long int sumOfTerms = 0;
    printf("N value = %d, Number of terms = %d \n", termValue, numberOfTerms);

    for (int i = 1; i <= numberOfTerms; i++)
    {
        sumOfTerms += pow(termValue, i - 1) * pwe(-1, i - 1);
    }
    printf("Sum of %d terms is %ld", numberOfTerms, sumOfTerms);
}
