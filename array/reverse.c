// Question: Write a program to copy the contents of one array into another array and print the new array in reverse order

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};     // Original array
    int n = 5;                       // Size of array
    int copy[5];                     // New array

    for (int i = 0; i < n; i++) {    // Copy elements
        copy[i] = arr[i];
    }

    printf("Reversed copied array: ");

    for (int i = n - 1; i >= 0; i--) { // Print in reverse order
        printf("%d ", copy[i]);
    }

    return 0;                        // End program
}