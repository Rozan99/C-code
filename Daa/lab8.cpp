#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function similar to QuickSort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the rightmost element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quickselect function
int quickselect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);

        if (pi == k - 1)
            return arr[pi];
        else if (pi > k - 1)
            return quickselect(arr, low, pi - 1, k);
        else
            return quickselect(arr, pi + 1, high, k);
    }
    return -1;
}

// Main function to test the Quickselect algorithm
int main() {
    int arr[] = {3, 2, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  // Change this value to find the k-th smallest element
    printf("Rojan Ghimire:\n");
    printf("The selection problem is demonstrated using the quick select algorithm:\n");
    int result = quickselect(arr, 0, n - 1, k);
    if (result != -1)
        printf("The %d-th smallest element is %d\n", k, result);
    else
        printf("Invalid input\n");

    return 0;
}
