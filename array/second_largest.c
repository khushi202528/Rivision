// Ques: Find the second largest element in the given array.

// Example:

// arr[] = {5, 2, 9, 7, 3};

// Largest element = 9

// Second largest element = 7

// Output:

// 7

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 7, 3};   // Array declaration
    int n = 5;                     // Number of elements in array

    int largest = arr[0];          // Assume first element is largest
    int secondLargest = arr[0];    // Assume first element is second largest

    for (int i = 1; i < n; i++) {  // Traverse array from second element

        if (arr[i] > largest) {    // If current element is greater than largest

            secondLargest = largest; // Old largest becomes second largest
            largest = arr[i];        // Update largest

        }

        else if (arr[i] > secondLargest && arr[i] != largest) {
            // If current element is greater than secondLargest
            // and not equal to largest

            secondLargest = arr[i]; // Update second largest
        }
    }

    printf("Second Largest = %d", secondLargest); // Print result

    return 0; // Program ends successfully
}