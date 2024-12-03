// Count the times an element is present in an Array

#include <stdio.h>

int countOccurrences(int arr[], int size, int element) {
    int count = 0;

    // Loop through the array and count occurrences
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    return count;
}

int main() {
    int size, element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &element);

    int result = countOccurrences(arr, size, element);
    printf("The element %d is present %d times in the array.\n", element, result);

    return 0;
}