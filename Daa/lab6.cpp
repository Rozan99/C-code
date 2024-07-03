#include <stdio.h>

// Function prototypes
void merge(int arr[], int l, int m, int r, int *mergeCount);
void mergeSort(int arr[], int l, int r, int *mergeCount);
void swap(int *a, int *b);
int partition(int arr[], int low, int high, int *quickCount);
void quickSort(int arr[], int low, int high, int *quickCount);
void printArray(int arr[], int size);

// Merge two subarrays L and M into arr
void merge(int arr[], int l, int m, int r, int *mergeCount) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        (*mergeCount)++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r, int *mergeCount) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, mergeCount);
        mergeSort(arr, m + 1, r, mergeCount);

        merge(arr, l, m, r, mergeCount);
    }
}

// Function to swap elements
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to find the partition position
int partition(int arr[], int low, int high, int *quickCount) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        (*quickCount)++;
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick sort function
void quickSort(int arr[], int low, int high, int *quickCount) {
    if (low < high) {
        int pi = partition(arr, low, high, quickCount);

        quickSort(arr, low, pi - 1, quickCount);
        quickSort(arr, pi + 1, high, quickCount);
    }
}

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function to test merge sort and quick sort
int main() {
    int n;
  
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original array:\n");
    printArray(arr, n);

    // Perform merge sort
    int mergeCount = 0;
    mergeSort(arr, 0, n - 1, &mergeCount);

    // Print sorted array and number of comparisons in merge sort
    printf("\nSorted array using Merge Sort:\n");
    printArray(arr, n);
    printf("Number of comparisons in Merge Sort: %d\n", mergeCount);

    // Reset array for quick sort
    int arr2[n];
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }
    int quickCount = 0;

    // Perform quick sort
    quickSort(arr2, 0, n - 1, &quickCount);

    // Print sorted array and number of comparisons in quick sort
    printf("\nSorted array using Quick Sort:\n");
    printArray(arr2, n);
    printf("Number of comparisons in Quick Sort: %d\n", quickCount);

    return 0;
}
