// Reverse an array of size N of type float
#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    float array[N];
    printf("Enter %d elements of the array:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    // Reverse the array
    for (int i = 0; i < N / 2; i++) {
        float temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }

    printf("\nReversed array:\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    return 0;
}