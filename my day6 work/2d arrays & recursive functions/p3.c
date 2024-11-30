//3. Find smallest number in an array of size N
#include <stdio.h>
#include <stdlib.h>

int findSmallest(int arr[], int n) 
{
    if (n == 1) 
    {
        return arr[0];
    }

    // Find the smallest in the array
    int smallest = findSmallest(arr, n - 1);
    if (arr[n - 1] < smallest) 
    {
        return arr[n - 1];
    } else {
        return smallest;
    }
}

int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        printf("Usage: %s <n> <array_elements>\n", argv[0]);
        return 1; // Exit if no array elements are provided
    }

    int n = atoi(argv[1]);
    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        if (i + 2 < argc) 
        {
            arr[i] = atoi(argv[i + 2]);
        } else {
            printf("Not enough array elements provided.\n");
            return 1;
        }
    }

    // Find the smallest number using the recursive function
    int smallest = findSmallest(arr, n);

    // Print the result
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}