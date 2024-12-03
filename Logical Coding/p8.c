// Remove duplicate elements from the Array and shift the
// elements (If n duplicate elements are removed then n zeroes should trail in the array)

#include <stdio.h>

void removeDuplicates(int arr[], int size) {
    int uniqueIndex = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if arr[i] is already in the unique portion of the array
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, move it to the unique portion
        if (!isDuplicate) {
            arr[uniqueIndex] = arr[i];
            uniqueIndex++;
        }
    }

    // Fill the remaining positions with 0
    for (int i = uniqueIndex; i < size; i++) {
        arr[i] = 0;
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates and shift elements
    removeDuplicates(arr, size);

    printf("Array after removing duplicates and shifting elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}