#include <stdio.h>

int main() {
    int array2[] = {2, 4, 5, 8, 9};

    int size = sizeof(array2) / sizeof(array2[0]);

    printf("Elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}