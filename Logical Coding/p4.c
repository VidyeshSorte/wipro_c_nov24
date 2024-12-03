//Implement Linear(sequential) search using a multi file program.

#include "p4.h"

// Function to perform Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the found key
        }
    }
    return -1; // Return -1 if the key is not found
}