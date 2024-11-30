#include <stdio.h>
#include <stdlib.h>

int findSum(int *ptr, int size)
{
    if(size == 1)
        return prt[0];
    return ptr[size - 1] + findSum(ptr, size - 1);
}

int main(int argCount, char **args)
{
    int arraySize = atoi(args[1]); //we are converting the string into integers
    int array[50] = { 0 }; // initializing the array to 0
    printf("Enter %d numbers of the arrays /n", arraySize);
    for (int i = 0; i < arraySize; i++)
        scanf("%d", &array[i]);

    int sum = findSum(array, arraySize);
    printf("Sum of array numbers = %d", sum);
}