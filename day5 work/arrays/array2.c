/*
Find the frequency of an element of user choice in an array of size N 
which is also given user (array is of type int)
*/

#include <stdio.h>

int main() 
{
    int N, element, count = 0;
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    int array[N];

    // ask user for array elements
    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);

    for (int i = 0; i < N; i++) 
    {
        if (array[i] == element) 
        {
            count++;
        }
    }

    printf("The frequency of %d in the array is: %d\n", element, count);
}