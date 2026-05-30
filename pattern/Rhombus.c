// Print the given pattern

//    ****
//   ****
//  ****
// ****



// Rhombus


// i = 0
// Spaces = 4-0-1 = 3
// Stars  = 4
// Output:    ****

// i = 1
// Spaces = 4-1-1 = 2
// Stars  = 4
// Output:   ****

// i = 2
// Spaces = 4-2-1 = 1
// Stars  = 4
// Output:  ****

// i = 3
// Spaces = 4-3-1 = 0
// Stars  = 4
// Output: ****
#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    // Outer loop = rows
    // i = 0,1,2,3...(n-1)
    for(int i = 0; i < n; i++) {

        // Space loop
        // Formula: spaces = n - i - 1
        //
        // Example (n=4):
        // i=0 -> 4-0-1 = 3 spaces
        // i=1 -> 4-1-1 = 2 spaces
        // i=2 -> 4-2-1 = 1 space
        // i=3 -> 4-3-1 = 0 spaces
        //
        // j < 3 means j = 0,1,2 (3 times)
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Star loop
        // Har row mein n stars print karne hain
        //
        // Example (n=4):
        // Row1 -> ****
        // Row2 -> ****
        // Row3 -> ****
        // Row4 -> ****
        //
        // k < n means loop n times chalega
        for(int k = 0; k < n; k++) {
            printf("*");
        }

        // Ek row complete ho gayi
        printf("\n");
    }

    return 0;
}