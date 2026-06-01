// Star Diamond

//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//      *
//------------------------------Revise this again and again-------------------------------
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &n);

    // Upper Half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower Half
    for (int i = n - 2; i >= 0; i--)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        for (int l = 0; l < 2 * i + 1; l++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}