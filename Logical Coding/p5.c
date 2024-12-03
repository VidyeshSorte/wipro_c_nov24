//Swap the 1st half of an Array with the 2nd half elements.

#include <stdio.h>

void swapArrayHalves(int arr[], int size) {
    int mid = size / 2; // Find the midpoint of the array
    int temp;

    // Swap the elements of the 1st half with the 2nd half
    for (int i = 0; i < mid; i++) {
        temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}

int main() {
    int n;
    printf("Enter the size of the array (must be even): ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("The array size must be even for this operation.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    swapArrayHalves(arr, n);

    printf("Array after swapping halves:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}