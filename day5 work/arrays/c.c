#include <stdio.h>

int main() {
    int array3[10] = {20, 5, 9, 11, 0, -2};

    printf("Elements of the array:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("array3[%d] = %d\n", i, array3[i]);
    }

    return 0;
}