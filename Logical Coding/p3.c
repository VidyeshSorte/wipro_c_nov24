// Swap consecutive elements of an Array using a for loop.

#include <stdio.h>

void swapConsecutiveElements(int arr[], int n)//function
{
    for (int i = 0; i < n -1; i+= 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr [ i + 1] = temp;
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];// array declaration
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    swapConsecutiveElements(arr, n); // function calling


    printf("Array after swapping consecutive elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}