// Print the given pattern
// Star Pyramid

// Pattern:
//       *
//     * * *
//   * * * * *
// * * * * * * *

// Row   Spaces   Stars
// 1       3        1
// 2       2        3
// 3       1        5
// 4       0        7

// Observation:
// Spaces decrease:
// n-1, n-2, n-3 ... 0

// Stars increase by 2:
// 1, 3, 5, 7 ...

// Formulas:
// Spaces = n - i - 1
// Stars  = 2*i + 1

// Dry Run:
// i = 0 -> spaces = 3, stars = 1
// i = 1 -> spaces = 2, stars = 3
// i = 2 -> spaces = 1, stars = 5
// i = 3 -> spaces = 0, stars = 7

// Logic:
// 1. Print spaces
// 2. Print stars
// 3. Move to next line

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i <=n; i++)
    {
        for(int j = 0; j <=n-i-1; j++)
        {
            printf(" ");
           
        }
        for(int k =0;k<=2*i;k++){
            printf("*");
        }
        printf("\n");
    }
}