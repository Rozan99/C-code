#include <stdio.h>

// Function to calculate the nth Fibonacci number using iteration and count iterations
int fibonacci_with_count(int n, int *count) {
    int a = 0, b = 1, c;

    // Initialize count
    *count = 0;

    // Handle base cases
    if (n == 0) return a;
    if (n == 1) return b;

    // Iterate from 2 to n
    for (int i = 2; i <= n; i++) {
        c = a + b; // Compute next Fibonacci number
        a = b;     // Move a to the next position
        b = c;     // Move b to the next position
        (*count)++; // Increment the count for each iteration
    }
    return b;
}

int main() {
    int n, count;
    // Ask user for the position of the Fibonacci number
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);

    // Calculate Fibonacci number and count iterations
    int result = fibonacci_with_count(n, &count);

    // Print the result and the number of iterations
    printf("Fibonacci number at position %d is %d\n", n, result);
    printf("The loop ran %d times.\n", count);

    return 0;
}
