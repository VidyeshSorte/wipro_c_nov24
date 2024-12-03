// Find the smallest and biggest elements of the array 
// of size N which is given by user (array is of type double)

#include <stdio.h>

void findMinMax(double arr[], int size, double *min, double *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    double arr[size];

    printf("Enter %d elements of the array (type double):\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }

    double min, max;
    findMinMax(arr, size, &min, &max);

    printf("Smallest element: %.2lf\n", min);
    printf("Biggest element: %.2lf\n", max);

    return 0;
}