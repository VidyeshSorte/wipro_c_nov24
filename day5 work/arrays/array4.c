/*
Remove duplicate elements in an array. After removal, 
the position of the removed elements must not be empty.
*/
#include <stdio.h>

int main() 
{
    int N;
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    int array[N];

    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Remove duplicates
    for (int i = 0; i < N; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            if (array[i] == array[j]) 
            {
                array[j] = 0; // Replace duplicate with 0
            }
        }
    }

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}