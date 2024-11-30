#include <stdio.h>

int main() {
    int array1[10] = { 0 };

    printf("Elements of the array:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("array1[%d] = %d\n", i, array1[i]);
    }
}