// *Ques : Print the given pattern

//   *
//  **
// ***
//**** 



#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    // i = row number
    for(int i = 0; i < n; i++) {

        // Spaces print karo
        // Row 1 -> n-1 spaces
        // Row 2 -> n-2 spaces
        // Row 3 -> n-3 spaces
        // Formula: spaces = n - i - 1
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Stars print karo
        // Row 1 -> 1 star
        // Row 2 -> 2 stars
        // Row 3 -> 3 stars
        // Formula: stars = i + 1
        for(int k = 0; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

// i = 0
// Spaces = 4-0-1 = 3
// Stars  = 1
// Output:    *

// i = 1
// Spaces = 4-1-1 = 2
// Stars  = 2
// Output:   **

// i = 2
// Spaces = 4-2-1 = 1
// Stars  = 3
// Output:  ***

// i = 3
// Spaces = 4-3-1 = 0
// Stars  = 4
// Output: ****
