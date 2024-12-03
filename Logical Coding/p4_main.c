//Implement Linear(sequential) search using a multi file program.

#include <stdio.h>
#include "p4.h"

int main() {
    int n, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element found at index %d (position %d).\n", result, result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}