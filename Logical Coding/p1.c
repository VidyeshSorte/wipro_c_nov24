//Find sum of the elements of an Array using a recursive function.

#include <stdio.h>

// Recursive function
int findSum(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + findSum(arr, n - 1);
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = findSum(arr, n);
    printf("The sum of the elements of the array is: %d\n", sum);
    
    return 0;
}