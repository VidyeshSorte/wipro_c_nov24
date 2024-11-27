/* 
find the biggest and the smallest element of array of size N 
which is given by user (array is of type double)
*/

#include <stdio.h>

int main() 
{
    int N;  // Size of the array
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    double array[N];
    printf("Enter %d elements of the array:\n", N);

    // Asking user to enter elements
    for (int i = 0; i < N; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%lf", &array[i]);
    }

    double bigNumber = array[0];
    double smallNumber = array[0];

    for (int i = 1; i < N; i++) 
    {
        if (array[i] > bigNumber) 
        {
            bigNumber = array[i];
        }
        if (array[i] < smallNumber) 
        {
            smallNumber = array[i];
        }
    }

    printf("The largest element is: %.2lf\n", bigNumber);
    printf("The smallest element is: %.2lf\n", smallNumber);
}