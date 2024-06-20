#include <stdio.h>

// Function to perform linear search and count the number of comparisons
int LINEAR_SEARCH(int inp_arr[], int size, int val, int *count) {
    *count = 0; // Initialize count

    for (int i = 0; i < size; i++) {
        (*count)++; // Increment count for each comparison
        if (inp_arr[i] == val) {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main(void) {
    int arr[] = {10, 20, 30, 40, 50, 100, 0}; // Array elements
    int key = 100; // Element to search for
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int count; // Variable to store the number of comparisons

    printf("Array of data is:\n 10,20,30,40,50,100,0\n");
    printf("Key is:\n 100\n");
    // Perform linear search
    int res = LINEAR_SEARCH(arr, size, key, &count);

    // Print the result and the number of comparisons
    if (res == -1) {
        printf("ELEMENT NOT FOUND!!\n");
    } else {
        printf("Item is present at index %d\n", res);
    }
    printf("Number of comparisons made: %d\n", count);

    return 0;
}
