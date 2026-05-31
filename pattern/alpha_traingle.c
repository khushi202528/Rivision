// Print the given pattern

// Alphabet Triangle
//       A
//     A B
//   A B C
// A B C D

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1;j++ )
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c ",k+65);
        }
        printf("\n");
        // Spaces ↓ (n-i-1), Alphabets ↑ (i+1)

    }
}