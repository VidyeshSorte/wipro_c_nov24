// Reverse the elements of an Array using a while loop.

#include <stdio.h>

void reverseArray(int arr[], int size) //function 1
{
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr [start];
        arr[start] = arr [end];
        arr [end] = temp;
        start++;
        end--;
    }
}

void inputAndDisplayArray()
{
    int number;
    printf("Enter the size of the array:", number);
    scanf("%d", &number);

    int arr[number];
    printf("Enter %d elements of the array: \n", number);
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }


    reverseArray(arr, number);
        printf("Reversed array: \n ");
        for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
   inputAndDisplayArray();
   return 0;
}