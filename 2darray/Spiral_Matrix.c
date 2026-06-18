// Given an n × m matrix, print all elements in spiral order.

// Example:

// Input:

// 1 2 3
// 4 5 6
// 7 8 9

// Output:

// 1 2 3 6 9 8 7 4 5

#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter rows: ");
    scanf("%d", &r);

    printf("Enter columns: ");
    scanf("%d", &c);

    int a[r][c];

    // Matrix input
    printf("Enter matrix:\n");
    for (int i = 0; i < r; i++) // rows ke liye
    {
        for (int j = 0; j < c; j++) // columns ke liye
        {
            scanf("%d", &a[i][j]);
        }
    }

    int minr = 0;      // top row index
    int maxr = r - 1;  // bottom row index

    int minc = 0;      // left column index
    int maxc = c - 1;  // right column index

    int tne = r * c;   // total number of elements
    int count = 0;     // kitne elements print ho chuke

    while (count < tne) // jab tak saare elements print na ho
    {

        // ===== Top Row =====
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", a[minr][j]); // top row left -> right
            count++;
        }
        minr++; // top row print ho gayi

        // ===== Right Column =====
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", a[i][maxc]); // top -> bottom
            count++;
        }
        maxc--; // right column print ho gayi

        // ===== Bottom Row =====
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d ", a[maxr][j]); // right -> left
            count++;
        }
        maxr--; // bottom row print ho gayi

        // ===== Left Column =====
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", a[i][minc]); // bottom -> top
            count++;
        }
        minc++; // left column print ho gayi
    }

    return 0;
}