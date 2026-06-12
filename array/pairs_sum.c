// Find the total number of pairs in the array whose sum is equal to the given value x.

// Example:

// arr[] = {3, 4, 6, 7, 1};
// x = 7

// Possible pairs:

// (3, 4)
// (6, 1)

// Output:

// 2


#include <stdio.h>

int main() {
    int arr[] = {3, 4, 6, 7, 1};
    int x = 7;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {

            if (arr[i] + arr[j] == x) {
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }

        }
    }

    printf("Total pairs = %d", count);


    return 0;
}